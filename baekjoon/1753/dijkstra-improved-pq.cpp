#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int v;

vector<pair<int, int>> g[20001];
int isVisited[20001];
int shortest[20001];

priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;

void dijkstra(int k);

template<typename T>
void print_queue(T q);

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int e, k;
	cin >> v >> e >> k;
	
	// initialize shortest table
	for (int i = 1; i <= v; i++)
		shortest[i] = 1e9;
	
	int a, b, w;
	
	for (int i = 0; i < e; i++) {
		cin >> a >> b >> w;
		// Notice. different edges can exist between two vertices.
		g[a].push_back(make_pair(b, w));
	}
	
	pq.push(make_pair(0, k));
	
	// do Dijkstra
	dijkstra(k);
	
	// print shortest path values
	for (int i = 1; i <= v; i++) {
		if (shortest[i] == 1e9)
			cout << "INF\n";
		else cout << shortest[i] << '\n';
	}
	
	return 0;
}

void dijkstra(int k) {
	
	while (!pq.empty()) {
		
		print_queue(pq);
		
		pair<int, int> r = pq.top();
		pq.pop();
		
		if (isVisited[r.second] == 1)
			continue;
		
		isVisited[r.second] = 1;
		
		if (r.second == k)
			shortest[r.second] = r.first;
	
		for (auto i : g[r.second]) {
			if (shortest[r.second] + i.second < shortest[i.first]) {
				shortest[i.first] = shortest[r.second] + i.second;
				pq.push(make_pair(shortest[i.first], i.first));
			}
		}
	}
}

template<typename T>
void print_queue(T q) {
	while (!q.empty()) {
		cout << q.top().first << '-' << q.top().second << ' ';
		q.pop();
	}
	cout << '\n';
}
