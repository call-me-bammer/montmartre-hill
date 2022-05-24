#include <iostream>
#include <cmath>
using namespace std;

int n;

int* p;

long long addPowerOf2(long long x, int isRow);

int main() {

	long long r, c;
	cin >> n >> r >> c;
	
	p = new int[n]();
	for (int i = 0; i < n; i++) {
		p[i] = pow(2, i);
	}
	
	long long visitCount = (r % 2) * 2 + c % 2;
	
	visitCount += addPowerOf2(r, 1);
	visitCount += addPowerOf2(c, 0);
	
	cout << visitCount << endl;
}

/*

if n = 3, 2^3 - 1 is max for r or c.
therefore, maximally 2^(n-1) is needed

*/

long long addPowerOf2(long long x, int isRow) {
	
	long long adder = 0;
	
	for (int i = n - 1; i > 0; i--) {
		if (p[i] <= x) {
			x -= p[i];
			adder += (isRow == 1 ? 2 * p[i] * p[i] : p[i] * p[i]);
		}
	}
	
	return adder;
}
