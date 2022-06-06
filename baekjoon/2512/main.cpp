#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, m;
	cin >> n;
	
	int* a = new int[n]();
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	cin >> m;
	
	// Parametric Search
	
	int l = 0;
	int r = *max_element(a, a + n);
	
	int h = 0;
	
	while (l <= r) {
		
		int mid = (l + r) / 2;
		
		long long p = 0;
		
		for (int i = 0; i < n; i++)
			p += (a[i] > mid ? mid : a[i]);
		
		if (p > m) {
			r = mid - 1;
		}
		
		else {
			l = mid + 1;
			h = mid;
		}
	}
	
	cout << h << '\n';
	
	delete a;
	
	return 0;
}
