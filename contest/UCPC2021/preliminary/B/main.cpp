#include <iostream>
#include <vector>
using namespace std;

#define DIRECTION_COEFFICIENT 4

// graph
int g[30][30];
int h[30][30];

// represent sectors & visit counter for dfs
int** s;

// graph's length of row & column
int n, m;

// represent present sector counter
int presentSector = 1;

// save cells for sector-i
vector<pair<int, int>> v[901];

// direction for finding adj. cell
int d[][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

void dfs(int i, int j);

int main() {
	
	cin >> n >> m;
	
	// dynamic allocation
	s = new int*[n];
	for (int i = 0; i < n; i++) {
		s[i] = new int[m]();
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> g[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> h[i][j];
		}
	}
	
	/*
	// debug
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << g[i][j] << ' ';
		}
		cout << '\n';
	}
	*/
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s[i][j] == 0) {
				dfs(i, j);
				presentSector++;
			}
		}
	}
	
	/*
	cout << "=== sector ===\n";
	// debug : graph to sectors
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << s[i][j] << ' ';
		}
		cout << '\n';
	}
	*/
	
	int numOfChangedSector = 0;
	
	for (int i = 1; i < presentSector; i++) {
		
		int isChanged = 0;
		int chagneValue = 0;
		
		for (auto j : v[i]) {
			int y = j.first;
			int x = j.second;
						
			if ((g[y][x] != h[y][x]) && (j == v[i].front())) {
				isChanged = 1;
				chagneValue = h[y][x];
			}
			
			// NO case
			else if ((isChanged == 1) && (chagneValue != h[y][x])) {
				cout << "NO\n";
				return 0;
			}
		}
		
		if (isChanged == 1)
			numOfChangedSector++;
	}
	
	// YES & NO case
	if ((numOfChangedSector == 0) || (numOfChangedSector == 1)) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
	
	// free memory
	for (int i = 0; i < n; i++)
		delete s[i];
	delete s;
	
	return 0;
}

// do DFS from (i, j)
void dfs(int i, int j) {
	
	s[i][j] = presentSector;
	v[presentSector].push_back(make_pair(i, j));
	
	for (int z = 0; z < DIRECTION_COEFFICIENT; z++) {
		int y = i + d[z][0];
		int x = j + d[z][1];
		
		if ((y < 0) || (y >= n))
			continue;
		
		if ((x < 0) || (x >= m))
			continue;
		
		if ((g[i][j] == g[y][x]) && (s[y][x] == 0))
			dfs(y, x);
	}
}
