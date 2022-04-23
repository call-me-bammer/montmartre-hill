#include <iostream>
using namespace std;

void printAllCoins(int change);

int main()
{
	int numberOfTestCase;
	cin >> numberOfTestCase;
	
	int change;
	
	for (int iterator = 0; iterator < numberOfTestCase; iterator++) {
		cin >> change;
		
		printAllCoins(change);
	}

	return 0;
}

void printAllCoins(int change) {
	
	int coins[] = {25, 10, 5, 1};
	
	for (int idx = 0; idx < 4; idx++) {
		cout << change / coins[idx] << ' ';
		change %= coins[idx];
	}
	
	cout << endl;
}
