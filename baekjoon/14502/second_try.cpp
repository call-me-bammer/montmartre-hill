#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring> // for memcpy()
#include <list>
using namespace std;

int d[][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

int bfs(list<int>* g, queue<int> q, int n);

// debug
void print_map(int** map, int n, int m);
void print_graph(list<int>* g, int n);

int main() {

	int n, m, o;
	cin >> n >> m;
	
	int** map = new int*[n];
	for (int i = 0; i < n; i++)
		map[i] = new int[m]();
	
	int safeCount = 0;
	int maxSafeCount = 0;
	
	vector<int> safe;
	queue<int> virus;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> o;
			
			switch (o) {
				case 0:
					safeCount++;
					safe.push_back(i * m + j);
					break;
				case 1:
					map[i][j] = 1;
					break;
				case 2:
					map[i][j] = 2;
					virus.push(i * m + j);
					break;
			}
		}
	}
	
	// debug
	cout << "safeCount : " << safeCount << endl;
	
	vector<int> c;
	
	for (int i = 0; i < safeCount - 3; i++)
		c.push_back(0);
	
	for (int i = 0; i < 3; i++)
		c.push_back(1);
	
	sort(c.begin(), c.end());
	

	
	// debug
	int t = 0;
	
	do {
		
		int** copy = new int*[n];
		for (int i = 0; i < n; i++) {
			copy[i] = new int[m]();
			memcpy(copy[i], map[i], sizeof(int) * m);
		}
				
		for (int i = 0; i < safeCount; i++) {
			if (c[i] == 1) {
				
				// do something with safe[i]
				int y = safe[i] / m;
				int x = safe[i] - y * m;
				
				copy[y][x] = 1;
			}
		}
		
		list<int>* g = new list<int>[n * m]();
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				
				if (copy[i][j] == 1)
					continue;
				
				int node = i * m + j;
				
				// copy[i][j] == 0 or 2
				for (int z = 0; z < 4; z++) {
					
					int y = i + d[z][0];
					int x = j + d[z][1];
					
					int adj = y * m + x;
					
					if (y < 0 || y >= n || x < 0 || x >= m)
						continue;
					
					if (copy[y][x] == 1)
						continue;
					
					// Notice. 0 to 2 is denied! (2 to 2 also...)
					if (copy[y][x] == 2)
						continue;
					
					g[node].push_back(adj);
				}
			}
		}
		
		// debug
		if (t < 2) {
			cout << "test." << endl;
			print_map(copy, n, m);
			//print_graph(g, n * m);
			cout << "bfs : " << safeCount - 3 - bfs(g, virus, n * m) << endl;
			t++;
		}
		
		maxSafeCount = max(maxSafeCount, safeCount - 3 - bfs(g, virus, n * m));
		
		for (int i = 0; i < n; i++)
			delete copy[i];
		
		delete[] copy;
		
	} while (next_permutation(c.begin(), c.end()));
	
	
	cout << maxSafeCount << endl;
	
	return 0;
}

int bfs(list<int>* g, queue<int> q, int n) {

	int* isVisited = new int[n]();
	
	int cnt = -q.size();
	
	while (!q.empty()) {
		
		int root = q.front();
		q.pop();
				
		if (isVisited[root] == 1)
			continue;
			
		isVisited[root] = 1;
		cnt++;
		
		for (auto i : g[root]) {
			q.push(i);
		}
	}
		
	delete isVisited;
	
	return cnt;
}

void print_map(int** map, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << map[i][j] << ' ';
		}
		cout << endl;
	}
}

void print_graph(list<int>* g, int n) {
	for (int i = 0; i < n; i++) {
		cout << "g[" << i << "] : ";
		for (auto adj : g[i]) {
			cout << adj << " ";
			if (adj != g[i].back())
				cout << "-> ";
		}
		cout << endl;
	}
}
