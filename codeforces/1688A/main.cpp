#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t, x;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> x;
		
		int y = 1;
		
		while (1) {
			if (((x & y) > 0) && ((x ^ y) > 0))
				break;
			y++;
		}
		
		cout << y << '\n';
	}
	
	return 0;
}
