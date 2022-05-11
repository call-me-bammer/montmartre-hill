#include <iostream>
#include <string>
using namespace std;

int n;
int visitCounter = 0;

int* isVisited;
int d[][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

void dfs(char** g, int i, int j, int state);

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);

	string s;
	
	cin >> n;
	
	char** pic = new char*[n];
	for (int i = 0; i < n; i++)
		pic[i] = new char[n]();
	
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			pic[i][j] = s[j];
		}
	}
	
	int mainCounter = 0;
	int area = 0;
	isVisited = new int[n * n]();
	
	// state = 1 : normal
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visitCounter != n * n) {
				dfs(pic, i, j, 1);
				
				if (mainCounter != visitCounter) {
					mainCounter = visitCounter;
					area++;
				}
			}
		}
	}
	
	cout << area << ' ';
	delete isVisited;

	visitCounter = 0;
	area = 0;
	isVisited = new int[n * n]();
	
	// state = 0 : blindness
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visitCounter != n * n) {
				dfs(pic, i, j, 0);
				
				if (mainCounter != visitCounter) {
					mainCounter = visitCounter;
					area++;
				}
			}
		}
	}
	
	cout << area << '\n';
	
	for (int i = 0; i < n; i++)
		delete pic[i];
	delete[] pic;
	
	delete isVisited;
	
	return 0;
}

void dfs(char** g, int i, int j, int state) {
	
	int node = i * n + j;
	
	if (isVisited[node] == 1)
		return;
	
	isVisited[node] = 1;
	visitCounter++;
	
	for (int z = 0; z < 4; z++) {
		
		int y = i + d[z][0];
		int x = j + d[z][1];
			
		if (y < 0 || y >= n || x < 0 || x >= n)
			continue;
		
		if (g[y][x] == g[i][j])
			dfs(g, y, x, state);

		else if ((state == 0) && (g[i][j] != 'B') && (g[y][x] != 'B'))
			dfs(g, y, x, state);
	}
}
