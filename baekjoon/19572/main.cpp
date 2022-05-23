#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double d1, d2, d3;
	cin >> d1 >> d2 >> d3;

	// d1 = a + b
	// d2 = a + c
	// d3 = b + c
	
	double b = (d1 - d2 + d3) / 2;
	double a = d1 - b;
	double c = d3 - b;

	if ((a > 0) && (b > 0) && (c > 0)) {
		cout << 1 << endl
			 << fixed << setprecision(1) << a << ' ' << b << ' ' << c << endl;
	} else {
		cout << -1 << endl;	
	}
	
	return 0;	
}
