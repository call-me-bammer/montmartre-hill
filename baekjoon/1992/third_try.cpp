#include <iostream>
#include <string>
using namespace std;

int** m;

int a[][2] = { {0, 0}, {0, 1}, {1, 0}, {1, 1} };

string r;

void quad_tree(int n, int c, int u, int v);

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	m = new int*[n];
	for (int i = 0; i < n; i++)
		m[i] = new int[n]();
	
	string line;
	
	for (int i = 0; i < n; i++) {
		cin >> line;
		
		for (int j = 0; j < n; j++)
			m[i][j] = line[j] - '0';
	}
	
	cout << "=====================\n";
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << m[i][j];
		}
		cout << '\n';
	}
	
	cout << "======================\n";
	
	quad_tree(n, 0, 0, 0);

	cout << r << '\n';
	
	for (int i = 0; i < n; i++)
		delete m[i];
	delete m;
	
	return 0;
}

void quad_tree(int n, int c, int u, int v) {
	
	r += "(";
	
	int q = (n != 1 ? n / 2 : 1);
	
	
	
	for (int z = 0; z < 4; z++) {

		int b = 0;
		
		int _u = u + a[z][0] * q;
		int _v = v + a[z][1] * q;
		
		for (int y = _u; y < _u + q; y++) {
			for (int x = _v; x < _v + q; x++) {
				
				//int yy = y + a[c][0] * n;
				//int xx = x + a[c][1] * n;
				
				cout << m[y][x];
				
				if (m[y][x] == 1)
					b++;
			}
			cout << '\n';
		}
		
		if (b == q * q)
			r += "1";
		else if (b == 0)
			r += "0";
		else {
			quad_tree(n / 2, z, _u, _v);
		}
	}
	
	r += ")";
}
