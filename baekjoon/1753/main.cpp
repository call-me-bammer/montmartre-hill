#include <iostream>
#include <vector>
using namespace std;

int* isVisited;
int* shortestPath;

void dfs(vector<pair<int, int>>* g, int k, int a);

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, e, k;
	cin >> n >> e >> k;
	
	vector<pair<int, int>> g[n + 1];
	
	int u, v, w;
	
	for (int i = 0; i < e; i++) {
		cin >> u >> v >> w;
		g[u].push_back(make_pair(v, w));	
	}
	
	/*
	// debug : print graph
	for (int i = 1; i <= n; i++) {
		cout << "g[" << i << "] : ";
		for (auto adj : g[i]) {
			cout << "(" << adj.first << ", " << adj.second << ")";
			if (adj != g[i].back())
				cout << ", ";
		}
		cout << '\n';
	}
	*/
	
	isVisited = new int[n + 1]();
	shortestPath = new int[n + 1]();
	
	dfs(g, k, 0);

	for (int i = 1; i <= n; i++) {
		
		if (i == k)
			cout << 0 << '\n';
		
		else if (shortestPath[i] == 0)
			cout << "INF\n";
		
		else
			cout << shortestPath[i] << '\n';
		
	}
	
	delete isVisited;
	delete shortestPath;
	
	return 0;
}

void dfs(vector<pair<int, int>>* g, int k, int a) {
	
	// sp[k] != 0
	if (isVisited[k] == 1) {
		shortestPath[k] = min(shortestPath[k], a);
	}
	
	// sp[k] == 0
	else {
		shortestPath[k] = a;
		isVisited[k] = 1;
	}
	
	for (auto i : g[k]) {
		dfs(g, i.first, a + i.second);
	}
}
