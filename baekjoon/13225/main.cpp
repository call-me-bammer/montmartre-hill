#include <iostream>
#include <cmath>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int* a = new int[10000]();
	a[1] = 1;
	
	for (int i = 2; i < 10000; i++) {
	
		int cnt = 0;
		int j = ceil(sqrt(i));
	
		for (int d = 2; d < j; d++) {
			if (i % d == 0)
				cnt++;
		}
		
		a[i] = 2 + cnt * 2;
		
		if (i == pow(j, 2))
			a[i]++;
	}
	
	int c, n;
	cin >> c;
	
	for (int i = 0; i < c; i++) {
		cin >> n;
		cout << n << ' ' << a[n] << '\n';
	}
	
	delete a;
	
	return 0;
}
