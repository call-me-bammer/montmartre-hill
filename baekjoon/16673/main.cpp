#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int c, k, p;
	cin >> c >> k >> p;
	
	int sumOfWine = 0;
	
	for (int i = 1; i <= c; i++) {
		sumOfWine += k * i + p * pow(i, 2);
	}
	
	cout << sumOfWine << endl;
	
	return 0;
}
