#include <iostream>
using namespace std;

int main() {

	int t, n;
	cin >> t;
	
	int a, b;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> a >> b;
			
			cout << a + b << ' ' << a * b << endl;
		}
	}
	
	return 0;
}
