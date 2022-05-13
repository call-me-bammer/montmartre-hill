#include <iostream>
using namespace std;

int main() {
	
	int t, n;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		
	
		int openedRooms = 0;
		int* r = new int[n + 1](); // 0 is closed
		
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <=n; j += i) {
				r[j] = 1 - r[j];
			}
		}
		
		for (int i = 1; i <= n; i++) {
			if (r[i] == 1)
				openedRooms++;
		}
		
		cout << openedRooms << endl;
			
		delete r;
	}
	
	return 0;
}
