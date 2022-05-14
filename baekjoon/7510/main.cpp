#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	long long a[3];
	
	for (int i = 0; i < t; i++) {
		
		for (int j = 0; j < 3; j++)
			cin >> a[j];
		
		sort(a, a + 3);
		
		cout << "Scenario #" << i + 1 << ":\n";
		
		if (pow(a[0], 2) + pow(a[1], 2) == pow(a[2], 2)) 
			cout << "yes\n";
		
		else cout << "no\n";
		
		if (i != t - 1)
			cout << '\n';
	}
	
	return 0;
}
