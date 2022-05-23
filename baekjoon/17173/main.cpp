#include <iostream>
using namespace std;

int main() {

	int n, m, k;
	cin >> n >> m;

	int* a = new int[n + 1]();
	
	for (int i = 0; i < m; i++) {
		cin >> k;
		
		for (int j = k; j <= n; j += k) {
			a[j]++;
		}
	}
	
	int sum = 0;
	
	for (int i = 1; i <= n; i++) {
		if (a[i] > 0)
			sum += i;
	}
	
	cout << sum << endl;
	
	return 0;
}
