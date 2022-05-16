#include <iostream>
using namespace std;

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	int* a = new int[n]();
	int* b = new int[n]();
	
	int sum = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		
		if (i == 0) {
			a[i] = b[i];
			sum += a[i];
			continue;
		}
		
		a[i] = b[i] * (i + 1) - sum;
			
		sum += a[i];
	}
	
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << '\n';
	
	delete a;
	delete b;
	
	return 0;
}
