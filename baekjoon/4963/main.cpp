#include <iostream>
using namespace std;

int w, h;
int g[50][50];

int d[][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

int visitCounter = 0;
int* isVisited;

void dfs(int i, int j);

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	while (1) {
		cin >> w >> h;
	
		if ((w == 0) && (h == 0))
			break;
		
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> g[i][j];
			}
		}
		
		isVisited = new int[w * h]();
		
		visitCounter = 0;
		int mainCounter = 0;
		int numberOfIsland = 0;
		
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if ((g[i][j] == 1) && (isVisited[i * w + j] == 0)) {
					dfs(i, j);
					
					if (mainCounter != visitCounter) {
						mainCounter = visitCounter;
						numberOfIsland++;
					}
				}
			}
		}
		
		cout << numberOfIsland << '\n';
		
		delete isVisited;
	}
	
	return 0;
}

void dfs(int i, int j) {

	isVisited[i * w + j] = 1;
	visitCounter++;
	
	for (int a = i - 1; a <= i + 1; a++) {
		for (int b = j - 1; b <= j + 1; b++) {

			if (a < 0 || a >= h || b < 0 || b >= w)
				continue;
				
			if ((a == i) && (b == j))
				continue;
			
			if ((g[a][b] == 1) && (isVisited[a * w + b] == 0))
				dfs(a, b);
		}
	}
}
