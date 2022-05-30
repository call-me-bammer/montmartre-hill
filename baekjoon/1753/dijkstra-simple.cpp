#include <iostream>
using namespace std;

int v;

int** g;
int* isVisited;
int* shortest;

void dijkstra(int k);

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int e, k;
	cin >> v >> e >> k;
	
	// dynamic allocation
	// Flaw. if v == 20000, 1.6 GB is needed.
	g = new int*[v + 1];
	for (int i = 0; i <= v; i++)
		g[i] = new int[v + 1]();
	
	isVisited = new int[v + 1]();
	shortest = new int[v + 1]();
	
	// initialize shortest table
	for (int i = 1; i <= v; i++)
		shortest[i] = 1e9;
	
	int a, b, w;
	
	for (int i = 0; i < e; i++) {
		cin >> a >> b >> w;
		// Notice. different edges can exist between two vertices.
		g[a][b] = w;
	}
	
	// do Dijkstra
	dijkstra(k);
	
	// print shortest path values
	for (int i = 1; i <= v; i++) {
		if (shortest[i] == 1e9)
			cout << "INF\n";
		else cout << shortest[i] << '\n';
	}
	
	// free memory
	for (int i = 0; i <= v; i++)
		delete g[i];
	
	delete g;
	delete isVisited;
	delete shortest;
	
	return 0;
}

void dijkstra(int k) {
	
	isVisited[k] = 1;
	shortest[k] = 0;
	
	int r = k;
	
	while (1) {
	
		for (int i = 1; i <= v; i++) {
			if ((g[r][i] != 0) && (shortest[r] + g[r][i] < shortest[i]))
				shortest[i] = shortest[r] + g[r][i];
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
