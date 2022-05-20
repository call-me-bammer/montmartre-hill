#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int l, r, a;
	cin >> l >> r >> a;
	
	int maxi = 0;
	
	int t;
	
	for (int i = 0; i <= a; i++) {
		
		t = min(l + i, r + a - i) * 2;
		
		if (maxi < t)
			maxi = t;
	}
	
	cout << maxi << endl;
	
	return 0;
}
