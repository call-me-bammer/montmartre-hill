#include <iostream>
#include <vector>
using namespace std;

int v;

vector<pair<int, int>> g[20001];
int isVisited[20001];
int shortest[20001];

void dijkstra(int k);

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
	
	isVisited[k] = 1;
	shortest[k] = 0;
	
	int r = k;
	
	while (1) {
	
		for (auto i : g[r]) {
			if (shortest[r] + i.second < shortest[i.first])
				shortest[i.first] = shortest[r] + i.second;
		}
		
		int choice = 0;
		int min = 1e9;
		
		for (int i = 1; i <= v; i++) {
			if ((isVisited[i] == 0) && (min > shortest[i])) {
				min = shortest[i];
				choice = i;
			}
		}
		
		if (!choice)
			break;
		
		r = choice;
		isVisited[r] = 1;
	}
}
