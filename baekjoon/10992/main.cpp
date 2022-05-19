#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		
		for (int j = n - i; j > 1; j--) {
			cout << ' ';
		}
		
		for (int j = 0; j < i * 2 + 1; j++) {
			
			if ((i == 0) || (i == n - 1)) {
				cout << "*";
			}
			
			else if ((j == 0) || (j == i * 2)) {
				cout << "*";
			}
			
			else {
				cout << ' ';
			}
		}
		
		cout << endl;
	}
	
	return 0;
}
