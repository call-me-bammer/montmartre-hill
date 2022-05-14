#include <iostream>
#include <cmath>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;

	long long n;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << (long long)pow(n, 2) << '\n';
	}
	
	return 0;
}
