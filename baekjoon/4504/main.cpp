#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, a;
	cin >> n;
	
	while (1) {
		cin >> a;
		
		if (a == 0) break;
		
		if (a % n == 0)
			cout << a << " is a multiple of " << n << ".\n";
		
		else
			cout << a << " is NOT a multiple of " << n << ".\n";
	}
	
	return 0;
}
