#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int k, n, score;
	cin >> k;
	
	for (int i = 0; i < k; i++) {
		cin >> n;
		
		int max = 0;
		int min = 100;
		int lgap = 0;
		
		int a[n];
		
		for (int j = 0; j < n; j++) {
			cin >> a[j];
						
			if (a[j] > max) max = a[j];
			if (a[j] < min) min = a[j];
		}
		
		sort(a, a + n);
		
		for (int j = 0; j < n - 1; j++) {
			if (a[j+1] - a[j] > lgap)
				lgap = a[j+1] - a[j];
		}
		
		cout << "Class " << i + 1 << '\n'
			 << "Max " << max << ", Min " << min << ", Largest gap " << lgap << '\n';
	}
	
	return 0;
}