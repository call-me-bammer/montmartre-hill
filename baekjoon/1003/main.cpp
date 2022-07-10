#include <iostream>
#include <cmath> // for abs(), sqrt(), pow()
using namespace std;

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	double x1, y1, r1;
	double x2, y2, r2;
	
	double d;
	
	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> r1
			>> x2 >> y2 >> r2;
		
		d = sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
			
		// range : 0 ~ 2, and -1

		if ((d == 0) && (r1 == r2)) {
			cout << -1 << '\n';
		}
		
		else if ((d == 0) && (r1 != r2)) {
			cout << 0 << '\n';
		}
		
		else if (d > r1 + r2) {
			cout << 0 << '\n';
		}
		
		else if (d == r1 + r2) {
			cout << 1 << '\n';
		}

		else if (d == abs(r2 - r1)) {
			cout << 1 << '\n';
		}
		
		else if (d < abs(r2 - r1)) {
			cout << 0 << '\n';
		}	
		
		else if (d < r1 + r2) {
			cout << 2 << '\n';
		}
	}
	
	return 0;
}
