#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t, n, v;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
	
		cin >> n;
		
		int sum = 0;
		
		for (int j = 0; j < n; j++) {
		
			cin >> v;
			sum += v;
		}
		
		cout << sum << '\n';
	}
	
	return 0;	
}
