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
	cout << "Q : " << q << '\n';
	
	if (q == 1) {
		cout << "N? : " << n << '\n';
		cout << "C? : " << c << '\n';
	}
	
	for (int z = 0; z < 4; z++) {

		int b = 0;
		
		
		for (int y = a[z][0] * q; y < q + a[z][0] * q; y++) {
			for (int x = a[z][1] * q; x < q + a[z][1] * q; x++) {

				if (q == 1) {
					cout << "a[c][0] : " << a[c][0] << '\n';
					cout << "a[c][1] : " << a[c][1] << '\n';
				}
				
				int yy = y + a[c][0] * n;
				int xx = x + a[c][1] * n;
				
				if (q == 1) {
					cout << "(" << yy << ", " << xx << ")\n";
				}
				
				cout << m[yy][xx];
				
				if (m[yy][xx] == 1)
					b++;
			}
			cout << '\n';
		}
		
		if (b == q * q)
			r += "1";
		else if (b == 0)
			r += "0";
		else {
			if (q == 2) {
				cout << "y : " << a[z][0] * q << '\n';
				cout << "x : " << a[z][1] * q << '\n';
			}
			quad_tree(n / 2, z, 0, 0);
		}
	}
	
	r += ")";
}
