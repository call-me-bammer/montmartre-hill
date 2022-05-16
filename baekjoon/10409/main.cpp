#include <iostream>
using namespace std;

int main() {

	int n, t, u;
	cin >> n >> t;
	
	int sum = 0;
	int cnt = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> u;
		sum += u;
		
		if (sum <= t)
			cnt++;
	}
	
	cout << cnt << endl;
	
	return 0;
}
