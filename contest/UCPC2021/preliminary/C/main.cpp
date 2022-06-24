#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double a, d, k;
	cin >> a >> d >> k;
	
	// represent present property
	double wp = d / 100;
	double lp = 1.0;
	
	double min = a;
	
	double avg = wp * min;

	while (1) {
		
		lp *= (1.0 - wp);
		wp = wp + (wp * k / 100);
		min += a;
		
		if (wp >= 1) {
			wp = 1.0;
			avg += lp * wp * min;
			break;
		}
		
		avg += lp * wp * min;
	}
	
	cout << fixed << setprecision(7) << avg << '\n';
	
	return 0;	
}
