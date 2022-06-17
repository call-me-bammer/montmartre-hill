#include <iostream>
using namespace std;

int main() {
	
	int n, m, k;
	cin >> n >> m >> k;
	
	int a, b;
	
	int maxi = 0;
	
	for (int i = 0; i <= k; i++) {
		a = n - i;
		b = m - (k - i);
	
		maxi = max(maxi, min(a / 2, b));
	}

	cout << maxi << endl;
	
	return 0;
}
