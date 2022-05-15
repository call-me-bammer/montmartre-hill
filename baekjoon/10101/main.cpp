#include <iostream>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	if ((a == 60) && (b == 60) && (c == 60)) {
		cout << "Equilateral\n";
	} else if (a + b + c != 180) {
		cout << "Error\n";
	} else if ((a == b) || (b == c) || (c == a)) {
		cout << "Isosceles\n";
	} else {
		cout << "Scalene\n";
	}

	return 0;
}
