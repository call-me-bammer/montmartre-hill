#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int t, n;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		
		int* a = new int[n]();
		
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}
		
		cout << (*max_element(a, a + n) - *min_element(a, a + n)) * 2 << endl;
	}
	
	return 0;
}
