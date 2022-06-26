#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t, y, k;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		
		int yScore = 0;
		int kScore = 0;
		
		for (int j = 0; j < 9; j++) {
			cin >> y >> k;
			yScore += y;
			kScore += k;	
		}
		
		if (yScore == kScore) {
			cout << "Draw\n";
		} else if (yScore > kScore) {
			cout << "Yonsei\n";
		} else {
			cout << "Korea\n";
		}
		
	}
	
	return 0;
}
