#include <iostream>
#include <list>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int d[][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

int bfs(list<int>* g, int** map, queue<int> q, int n, int m, int s);

void draw_graph(int** map, list<int>* g, int i, int j, int n, int m);

void print_map(int** map, int n, int m);
void print_graph(list<int>* g, int n);

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, m;
	cin >> n >> m;
	
	int** map = new int*[n];
	for (int i = 0; i < n; i++)
		map[i] = new int[m]();
	
	queue<int> virus;
	vector<int> empty;
	
	int safeCount = n * m;
	int maxSafeCount = 0;
	
	int v;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v;
			
			switch (v) {
				case 0:
					empty.push_back(i * m + j);
					break;
				case 1:
					map[i][j] = 1;
					safeCount--;
					break;
				case 2:
					map[i][j] = 2;
					safeCount--;
					virus.push(i * m + j);
					break;
			}
		}
	}
	
	list<int>* g = new list<int>[n * m]();
	
	// 1. drwa graph from original map
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			
			if (map[i][j] != 1)
				draw_graph(map, g, i, j, n, m);
		}
	}

	// 2. delete 3 edges from graph
	vector<int> combination;
	
	for (int i = 0; i < safeCount - 3; i++)
		combination.push_back(0);
	
	for (int i = 0; i < 3; i++)
		combination.push_back(1);
	
	sort(combination.begin(), combination.end());
	
	do {
		
		list<int>* tmp = new list<int>[n * m]();
		for (int i = 0; i < n * m; i++)
			tmp[i] = g[i];
		
		int** tmpM = new int*[n];
		for (int i = 0; i < n; i++) {
			tmpM[i] = new int[m]();
			tmpM[i] = map[i];
		}
		
		for (int i = 0; i < combination.size(); i++) {
			if (combination[i] == 1) {
				
				int node = empty[i];
				
				int y = node / m;
				int x = node - y * m;
				
				tmpM[y][x] = 1;
				
				for (auto edge : tmp[node]) {
					tmp[edge].remove(node);
				}
				
				tmp[node].clear();
			}
		}
			
		// 3. start BFS from virus queue
		int asdf = bfs(tmp, tmpM, virus, n, m, safeCount - 3);
		
		if (maxSafeCount < asdf) {
			cout << "max : " << asdf << '\n';
			print_map(tmpM, n, m);
		}
		
		maxSafeCount = max(maxSafeCount, asdf);
		
		
	} while (next_permutation(combination.begin(), combination.end()));
	
	// 4. cout maxSafeCount
	cout << maxSafeCount << '\n';
	
	// 5. free memory
	delete map;
	
	return 0;
}

int bfs(list<int>* g, int** map, queue<int> q, int n, int m, int s) {
	
	int* isVisited = new int[n * m]();
	int safeCount = s;
	
	for (int i = 0; i < 3; i++) {
		isVisited[q.front()] = 1;
		int virus = q.front();
		q.pop();
		q.push(virus);
	}
	
	while (q.size() != 0) {
		
		int root = q.front();
		q.pop();
		
		for (auto it : g[root]) {
			if (isVisited[it] == 1)
				continue;
			
			q.push(it);
			isVisited[it] = 1;
			
			int y = it / m;
			int x = it - y * m;
			
			if (map[y][x] == 0) {
				map[y][x] = 2;
				safeCount--;
			}
		}
	}	
	
	delete isVisited;
	
	return safeCount;
}

void draw_graph(int** map, list<int>* g, int i, int j, int n, int m) {
	
	int v = i * m + j;
	
	for (int z = 0; z < 4; z++) {
		
		int y = i + d[z][0];
		int x = j + d[z][1];
		
		if ((0 > y) || (y >= n))
			continue;
		
		if ((0 > x) || (x >= m))
			continue;
		
		if (map[y][x] == 1)
			continue;
		
		int adj = y * m + x;
		
		g[v].push_back(adj);	
	}
}

void print_map(int** map, int n, int m) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << map[i][j] << ' ';
		}
		cout << '\n';
	}
}

void print_graph(list<int>* g, int n) {
	
	for (int i = 0; i < n; i++) {
		
		list<int>::iterator iter = g[i].begin();
		cout << "g[" << i << "] : ";
		
		for ( ; iter != g[i].end(); iter++) {
			cout << *iter;
			if (*iter != g[i].back())
				cout << " -> ";
		}
		cout << '\n';
	}
}
