#include <iostream>
#include <queue> // for bfs()
#include <tuple>
using namespace std;

typedef queue<tuple<int, int, int>> TripleQueue;

int passedDays = 0;
int ripenTomatoCounter = 0;
int m, n, h;

int d[][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

int*** g;
bool*** v;

void bfs(TripleQueue q);

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	cin >> m >> n >> h;
	
	TripleQueue ripenTomatoQueue;

	// Allocate memory
	g = new int**[h];
	v = new bool**[h];
	
	for (int i = 0; i < h; i++) {
		g[i] = new int*[n];
		v[i] = new bool*[n];
		for (int j = 0; j < n; j++) {
			g[i][j] = new int[m]();
			v[i][j] = new bool[m]();
		}
	}
	
	int howManyTomato = 0;
	int isTomatoRipen;
	
	// cin
	for (int z = 0; z < h; z++) {
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				
				cin >> isTomatoRipen;
				
				if (isTomatoRipen == 1)
					ripenTomatoQueue.push(make_tuple(z, i, j));
				
				if (isTomatoRipen != -1)
					howManyTomato++;
				
				g[z][i][j] = isTomatoRipen;
			}
		}
	}
	
	cout << "Total Tomatos : " << howManyTomato << '\n';
	
	bfs(ripenTomatoQueue);
	
	cout << "Ripen Tomato Counter : " << ripenTomatoCounter << '\n';
	
	if (howManyTomato != ripenTomatoCounter)
		cout << -1 << '\n';
	
	else
		cout << passedDays - 1 << '\n';
	
	// Deallocate memory
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			delete[] g[i][j];
			delete[] v[i][j];
		}
		delete[] g[i];
		delete[] v[i];
	}
	delete[] g;
	delete[] v;
	
	return 0;
}

void bfs(TripleQueue q) {
	
	int qCnt = q.size();
	cout << "Initial qCnt : " << qCnt << '\n';
	
	while (!q.empty()) {
		
		tuple<int, int, int> t = q.front();
		q.pop();
		qCnt--;
		cout << "Decrease qCnt...\n";
		
		int k = get<0>(t);
		int i = get<1>(t);
		int j = get<2>(t);
		
		if (v[k][i][j] == 1)
			continue;
		
		v[k][i][j] = 1;
		ripenTomatoCounter++;
		
		for (int z = 0; z < 4; z++) {
			
			int y = i + d[z][0];
			int x = j + d[z][1];
			
			if (y < 0 || y >= n || x < 0 || x >= m)
				continue;
			
			if (g[k][y][x] == 0) {
				q.push(make_tuple(k, y, x));
				g[k][y][x] = 1;
			}
		}
		
		// TODO : remove duplicate!
		if ((k-1 >= 0) && (k-1 < h) && (g[k-1][i][j] == 0)) {
			q.push(make_tuple(k-1, i, j));
			g[k-1][i][j] = 1;
		}
		
		if ((k+1 >= 0) && (k+1 < h) && (g[k+1][i][j] == 0)) {
			q.push(make_tuple(k+1, i, j));
			g[k+1][i][j] = 1;
		}
		
		if (qCnt == 0) {
			passedDays++;
			qCnt = q.size();
			cout << "Update qCnt : " << qCnt << '\n';
		}
	}
}
