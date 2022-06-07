#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

int main() {
	
	double x, y;
	cin >> x >> y;
	
	double z = floor((y * 100) / x);
	
	// End-point test
	if (x == y) {
		cout << -1 << '\n';
		return 0;
	}
	
	ll l = 1;
	ll r = x * 2;
	
	// 99% case
	ll cnt = -1;
	
	while (l <= r) {
		ll mid = (l + r) / 2;
		
		double _z = floor((y + mid) * 100 / (x + mid));
		
		// same-z case
		if (z == _z) {
			l = mid + 1;
		} else {
			r = mid - 1;
			cnt = mid;
		}
	}
	
	cout << cnt << endl;
	
	return 0;
}
