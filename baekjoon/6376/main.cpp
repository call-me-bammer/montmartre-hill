#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int i);

int main() {

	double e = 0;
	
	cout << "n e" << endl
		 << "- -----------" << endl;
	
	for (int i = 0; i < 10; i++) {
	
		e += (double)1 / factorial(i);
		
		if (i < 3)
			cout << i << ' ' << e << endl;
		else
			cout << i << fixed << setprecision(9) << ' ' << e << endl;
	}
	
	return 0;
}

int factorial(int i) {
	
	int res = 1;
	
	for (int a = 1; a <= i; a++)
		res *= a;
	
	return res;
}
