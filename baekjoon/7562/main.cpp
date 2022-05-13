#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
int sy, sx;
int dy, dx;

int** g;

int phase;

int d[][2] = { {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1} };

void bfs(queue<pair<int, int>> q);

int main() {

	//cin.tie(0);
	//ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n >> sy >> sx >> dy >> dx;
		
		g = new int*[n];
		for (int j = 0; j < n; j++)
			g[j] = new int[n]();
		
		queue<pair<int, int>> q;
		
		phase = 1;
		
		q.push(make_pair(sy, sx));
		
		bfs(q);
		
		cout << phase << '\n';
		
		cout << "reach test...\n";
		for (int a = 0; a < n; a++) {
			for (int b = 0; b < n; b++) {
				cout << g[a][b] << ' ';
			}
			cout << '\n';
		}
		
		for (int j = 0; j < n; j++)
			delete g[j];
		delete[] g;
	}
	
	return 0;
}

void bfs(queue<pair<int, int>> q) {
	
	int qCnt = q.size();
	
	while (!q.empty()) {
	
		pair<int, int> p = q.front();
		q.pop();
		qCnt--;
		//cout << "decrease qCnt...\n";
		
		int i = p.first;
		int j = p.second;
		
		cout << phase << " : (" << i << ", " << j << ")\n";
		
		/*
		if (g[i][j] == 1) {
			//cout << "DUP : " << i << ", " << j << "\n";
			continue;
		}*/
		
		if (g[i][j] == 0)
			g[i][j] = phase;
		
		
		if (g[dy][dx] != 0)
			break;
		
		for (int z = 0; z < 8; z++) {
			
			int y = i + d[z][0];
			int x = j + d[z][1];
			
			if (y < 0 || y >= n || x < 0 || x >= n)
				continue;
			
			if (g[y][x] == 0) {
				q.push(make_pair(y, x));
				g[y][x] = phase + 1;
			}
			
		}
		
		// increase phase
		if (qCnt == 0) {
			qCnt = q.size();
			cout << "qCnt : " << qCnt << '\n';
			cout << "===== phase <" << phase << "> =====\n";
			
			for (int a = 0; a < n; a++) {
				for (int b = 0; b < n; b++) {
					cout << g[a][b] << ' ';
				}
				cout << '\n';
			}
			
			phase++;	
		}
	}
	
}
