#include <iostream>
#include <algorithm>
using namespace std;

int m[2187][2187];

int c[3] = {0, 0, 0};

int d[3][3][2] = { { {0, 0}, {0, 1}, {0, 2} },
				 { {1, 0}, {1, 1}, {1, 2} },
				 { {2, 0}, {2, 1}, {2, 2} } };

void paper_cut(int n, int u, int v);

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	
	int cnt[3] = {0, 0, 0};
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> m[i][j];
			
			cnt[m[i][j] + 1]++;
		}
	}
	
	// divide and conquer
	if ((cnt[0] != n * n) && (cnt[1] != n * n) && (cnt[2] != n * n))	
		paper_cut(n, 0, 0);
	
	else
		c[max_element(cnt, cnt + 3) - cnt]++;
	
	for (int i = 0; i < 3; i++) {
		cout << c[i] << '\n';
	}
	
	return 0;	
}

void paper_cut(int n, int u, int v) {
	
	int t = n / 3;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			
			int _u = u + d[i][j][0] * t;
			int _v = v + d[i][j][1] * t;
			
			int cnt[3] = {0, 0, 0};
			
			for (int y = _u; y < _u + t; y++) {
				for (int x = _v; x < _v + t; x++) {
					cnt[m[y][x] + 1]++;
				}
			}
			
			if ((cnt[0] != t * t) && (cnt[1] != t * t) && (cnt[2] != t * t))
				paper_cut(t, _u, _v);
			
			else {
				c[max_element(cnt, cnt + 3) - cnt]++;
			}
		}
	}
}
