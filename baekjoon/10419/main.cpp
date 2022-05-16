#include <iostream>
#include <cmath>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t, d;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> d;
		
		int late = 0;
		
		while (1) {	
			int subtractor = pow(late, 2);
			if (late + subtractor <= d) {
				late++;
				continue;
			}
			break;
		}
		
		cout << late - 1 << '\n';
		
	}
	
	return 0;
}
