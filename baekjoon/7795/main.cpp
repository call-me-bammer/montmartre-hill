#include <iostream>
#include <algorithm>
using namespace std;

int a[20000];
int b[20000];

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		
		int n, m;
		cin >> n >> m;
		
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}
		
		for (int j = 0; j < m; j++) {
			cin >> b[j];
		}
		
		sort(a, a + n);
		sort(b, b + m);
		
		int bMax = b[m - 1];
		int result = 0;
		
		for (int j = n - 1; j >= 0; j--) {
			
			if (a[j] > bMax) {
				result += m;
				continue;
			}
			
			int l = 0;
			int r = m - 1;
			
			int ans = -1;
			
			// O(log M) search
			while (l < r) {
				
				int mid = (l + r) / 2;
				
				if (a[j] <= b[mid]) {
					r = mid;
				} else {
					l = mid + 1;
					ans = mid;
				}
			}
			
			if (ans != -1)
				result += ans + 1;
		}
		
		cout << result << '\n';
	}
	
	return 0;
}
