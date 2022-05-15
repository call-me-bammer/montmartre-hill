#include <iostream>
using namespace std;

int main() {

	int t, n, d;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n >> d;
		
		int v, f, c;
		int cnt = 0;
		
		for (int j = 0; j < n; j++) {
			cin >> v >> f >> c;
			
			if (v * f / c >= d)
				cnt++;
		}
		
		cout << cnt << endl;
	}
	
	return 0;
}
