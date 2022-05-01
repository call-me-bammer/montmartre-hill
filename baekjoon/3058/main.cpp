#include <iostream>
using namespace std;

int main() {

	int t, n;
	
	cin >> t;
	
	for (int j = 0; j < t; j++) {
	
		int evenSum = 0;
		int evenMin = 100;
		
		for (int i = 0; i < 7; i++) {
			cin >> n;

			if (n % 2 != 0)
				continue;

			evenSum += n;

			if (evenMin > n)
				evenMin = n;
		}
		
		cout << evenSum << ' ' << evenMin << endl;
	}
	
	return 0;
}
