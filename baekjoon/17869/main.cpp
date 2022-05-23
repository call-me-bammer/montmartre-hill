#include <iostream>
using namespace std;

int main() {

	long long n;
	cin >> n;
	
	int numberOfSteps = 0;
	
	while (n != 1) {
		n = (n % 2 == 0 ? n / 2 : n + 1);
		numberOfSteps++;
	}
	
	cout << numberOfSteps << endl;
	
	return 0;
}
