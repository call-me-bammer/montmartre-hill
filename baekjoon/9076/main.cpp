#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	int a[5];
	
	for (int i = 0; i < t; i++) {
	
		for (int j = 0; j < 5; j++)
			cin >> a[j];
		
		sort(a, a + 5);
		
		int sum = 0;
		for (int j = 1; j < 4; j++)
			sum += a[j];
		
		if (a[3] - a[1] >= 4)
			cout << "KIN\n";
		
		else
			cout << sum << '\n';
	}
	
	return 0;
}
