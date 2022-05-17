#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	int n;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		
		int csum = 0;
		double gpa = 0;
		
		double* c = new double[n]();
		double* g = new double[n]();
		
		for (int j = 0; j < n; j++) {
			cin >> c[j] >> g[j];
			csum += c[j];
		}
		
		for (int j = 0; j < n; j++) {
			gpa += g[j] * c[j] / csum;
		}
		
		cout << fixed << setprecision(1) << csum << ' ' << gpa << '\n';
		
		delete c;
		delete g;
	}
	
	return 0;
}
