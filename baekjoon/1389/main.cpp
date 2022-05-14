#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int n;

int** g;
int** kb;

void bfs(int r);

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);

	int m, a, b;
	cin >> n >> m;
	
	g = new int*[n + 1];
	kb = new int*[n + 1];
	for (int i = 1; i <= n; i++) {
		g[i] = new int[n + 1]();
		kb[i] = new int[n + 1]();
	}
	
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		
		g[a][b] = 1;
		g[b][a] = 1;
	}

	for (int i = 1; i <= n; i++)
		bfs(i);
	
	int minKbSum = 987654321;
	int minKbIndex = 1;
	
	for (int i = 1; i <= n; i++) {
		
		int kbSum = 0;
		
		for (int j = 1; j <= n; j++) {
			kbSum += kb[i][j];
		}
		
		if (minKbSum > kbSum) {
			minKbSum = kbSum;
			minKbIndex = i;
		}
	}
	
	cout << minKbIndex << '\n';
	
	for (int i = 0; i <= n; i++) {
		delete g[i];
		delete kb[i];
	}
	
	delete g;
	delete kb;
	
	return 0;
}

void bfs(int r) {
	
	int phase = 0;
	
	int* v = new int[n + 1]();
	
	queue<int> q;
	q.push(r);
	v[r] = 1;
	
	int qCnt = q.size();
	
	while (!q.empty()) {
		
		int node = q.front();
		q.pop();
		qCnt--;

		kb[r][node] = phase;
		
		for (int i = 1; i <= n; i++) {
			if ((g[node][i] == 1) && (v[i] == 0)) {
				q.push(i);
				v[i] = 1;
			}
		}
		
		if (qCnt == 0) {
			qCnt = q.size();
			phase++;
		}
	}
	
	delete v;
}
