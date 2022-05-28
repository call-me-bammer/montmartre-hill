#include <iostream>
#include <string>
using namespace std;

int** m;

int quad[][2] = { {0, 0}, {0, 1}, {1, 0}, {1, 1} };

void quad_tree(int n, int d);

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
			m[i][j] = line[j];
	}
	
	quad_tree(n, 0);
	cout << '\n';
	
	for (int i = 0; i < n; i++)
		delete m[i];
	delete m;
	
	return 0;
}

void quad_tree(int n, int d) {
	cout << '(';
	
	int q = (n % 2 == 0 ? n / 2 : 1);
	int b = 0;
	
	for (int i = 0 + quad[d][0] * q; i < q + quad[d][0] * q; i++) {
		
		b = 0;		
		for (int j = 0 + quad[d][1] * q; j < q + quad[d][1] * q; j++) {
			if (m[i][j] == '1') b++;
		}
		
		if (b == q * q) cout << 1;
		else if (b == 0) cout << 0;
		else quad_tree(n / 2, 0);
		
		b = 0;
		for (int j = q + quad[d][1] * q; j < n + quad[d][1] * q; j++) {
			if (m[i][j] == '1') b++;
		}
		
		if (b == q * q) cout << 1;
		else if (b == 0) cout << 0;
		else quad_tree(n / 2, 1);
	}
	
	for (int i = q + quad[d][0] * q; i < n + quad[d][0] * q; i++) {
		
		b = 0;
		for (int j = 0 + quad[d][1] * q; j < q + quad[d][1] * q; j++) {
			if (m[i][j] == '1') b++;
		}
		
		if (b == q * q) cout << 1;
		else if (b == 0) cout << 0;
		else quad_tree(n / 2, 2);	
		
		b = 0;
		for (int j = q + quad[d][1] * q; j < n + quad[d][1] * q; j++) {
			if (m[i][j] == '1') b++;
		}
		
		if (b == q * q) cout << 1;
		else if (b == 0) cout << 0;
		else quad_tree(n / 2, 3);	
	}
	
	cout << ')';
}
