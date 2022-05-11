#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cstring> // for memcpy()
using namespace std;

int n, m;
int g[8][8];

int d[][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

int bfs(int gh[][8], queue<int> virus);

int main() {
	
	cin >> n >> m;
	
	int safeCount = 0;
	vector<int> empty;
	queue<int> virus;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> g[i][j];
			
			if (g[i][j] == 0) {
				empty.push_back(i * m + j);
				safeCount++;
			}
				
			else if (g[i][j] == 2)
				virus.push(i * m + j);
		}
	}
	
	int maxSafeCount = 0;
	int cnt = -virus.size();
	
	vector<int> c;
	for (int i = 0; i < safeCount - 3; i++) c.push_back(0);
	for (int i = 0; i < 3; i++) c.push_back(1);
	
	do {
		
		// TODO : is right copy of 2d array
		int cp[8][8];
		//copy(&g[0][0], &g[0][0] + n * m, &cp[0][0]);
		for (int i = 0; i < n; i++)
			memcpy(cp[i], g[i], sizeof(int) * m);
		
		for (int i = 0; i < safeCount; i++) {
			if (c[i] == 1) {
				// do with empty[i];
				
				int y = empty[i] / m;
				int x = empty[i] - y * m;
				
				cp[y][x] = 1;
			}
		}
		
		// bfs
		maxSafeCount = max(maxSafeCount, safeCount - 3 - bfs(cp, virus));
		
	} while (next_permutation(c.begin(), c.end()));
	
	cout << maxSafeCount << endl;
	
	return 0;
}

int bfs(int gh[][8], queue<int> virus) {
	
	int* isVisited = new int[n * m]();
	// TODO : is right copy for queue
	queue<int> q = virus;
	int cnt = -q.size();
	
	while (!q.empty()) {
		
		int r = q.front();
		q.pop();
		
		if (isVisited[r] == 1)
			continue;
		
		isVisited[r] = 1;
		cnt++;
		
		int i = r / m;
		int j = r - i * m;
		
		for (int z = 0; z < 4; z++) {
			
			int y = i + d[z][0];
			int x = j + d[z][1];
			
			if (y < 0 || y >= n || x < 0 || x >= m)
				continue;
			
			if (gh[y][x] == 0)
				q.push(y * m + x);
		}
	}
	
	delete isVisited;
	
	return cnt;
}
