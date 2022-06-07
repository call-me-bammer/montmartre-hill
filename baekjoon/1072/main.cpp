#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	
	long long x, y;
	cin >> x >> y;
	
	long double t = ((double)y / x) * pow(10, 2);
	long long z = stoi(to_string(t).substr(0, to_string((long long)t).size()));
	
	cout << "z : " << z << '\n';
	
	// End-point test
	if (x == y) {
		cout << -1 << '\n';
		return 0;
	}
	
	long long l = 1;
	long long r = x * 2;
	
	long long cnt = 0;
	
	while (l <= r) {
		long long mid = (l + r) / 2;
		
		long double t = ((double)(y + mid) / (x + mid)) * pow(10, 2);
		long long _z = stoi(to_string(t).substr(0, to_string((long long)t).size()));
		
		cout << "_z : " << _z << '\n'
			 << "mid : " << mid << '\n';
		
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
