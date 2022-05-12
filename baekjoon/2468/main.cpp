#include <iostream>
using namespace std;

int n, v;
int g[100][100];

int maxSafeArea = 1;

int mini = 100;
int maxi = 1;

int d[][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

int visitCount;
int* isVisited;

void dfs(int i, int j, int h);

int main() {

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v;
			
			g[i][j] = v;
			
			if (mini > v)
				mini = v;
			
			if (maxi < v)
				maxi = v;
		}
	}
	
	for (int h = mini; h < maxi; h++) {
		
		isVisited = new int[n * n]();
		
		visitCount = 0;
		int mainCount = 0;
		int safeArea = 0;
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((g[i][j] > h) && (isVisited[i * n + j] == 0)) {
					dfs(i, j, h);
					
					if (visitCount != mainCount) {
						mainCount = visitCount;
						safeArea++;
					}
				}
			}
		}
		
		if (safeArea > maxSafeArea)
			maxSafeArea = safeArea;
		
		delete isVisited;
	}
	
	cout << maxSafeArea << endl;
	
	return 0;
}

void dfs(int i, int j, int h) {

	if (isVisited[i * n + j] == 1)
		return;
	
	isVisited[i * n + j] = 1;
	visitCount++;
	
	for (int z = 0; z < 4; z++) {
		
		int y = i + d[z][0];
		int x = j + d[z][1];
		
		if (y < 0 || y >= n || x < 0 || x >= n)
			continue;
		
		if (g[y][x] > h)
			dfs(y, x, h);
	}
}
