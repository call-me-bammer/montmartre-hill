#include <iostream>
#include <cmath>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t, n, m;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
	
		int cnt = 0;
		
		for (int a = 1; a < n; a++) {
			for (int b = a + 1; b < n; b++) {
				
				double c = (pow(a, 2) + pow(b, 2) + m) / (a * b);
				
				if (c == (int)c)
					cnt++;
			}
		}
		
		cout << cnt << '\n';
	}
	
	return 0;
}
