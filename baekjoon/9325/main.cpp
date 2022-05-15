#include <iostream>
using namespace std;

int main() {

	int t, n, q, p;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		
		int s = 0;
		cin >> s >> n;
		
		for (int j = 0; j < n; j++) {
			cin >> q >> p;
			s += q * p;
		}
		
		cout << s << endl;
	}
	
	return 0;
}
