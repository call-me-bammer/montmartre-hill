#include <iostream>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	
	int* a = new int[n + 1]();
	for (int i = 1; i <= n; i++)
		a[i] = i;
	
	int u, v;
	
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
	
		for (int j = 0; j <= (u + v) / 2 - u; j++) {
			int tmp = a[u + j];
			a[u + j] = a[v - j];
			a[v - j] = tmp;
		}
	}
	
	for (int i = 1; i <= n; i++)
		cout << a[i] << ' ';
	cout << endl;
	
	delete a;
	
	return 0;
}
