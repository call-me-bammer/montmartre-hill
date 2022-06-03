#include <iostream>
#include <queue>
using namespace std;

int n;

int g[101][101];

void bfs(int r);

int main() {

	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> g[i][j];
		}
	}
	
	for (int i = 1; i <= n; i++) {
		bfs(i);
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << g[i][j] << ' ';
		}
		cout << '\n';
	}
}

void bfs(int r) {
	
	int* visit = new int[n + 1]();
	
	queue<int> q;
	q.push(r);
	
	while (!q.empty()) {
	
		int v = q.front();
		q.pop();
		
		for (int i = 1; i <= n; i++) {
			if ((visit[i] == 0) && (g[v][i] == 1)) {
				q.push(i);
				g[r][i] = 1;
				visit[i] = 1;
			}
		}
	}
}
