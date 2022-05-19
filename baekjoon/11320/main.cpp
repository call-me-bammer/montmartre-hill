#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t, a, b;
	cin >> t;
	
	int* c = new int[1001]();

	for (int i = 1; i <= 1000; i++) {
		c[i] = c[i - 1] + i * 2 - 1;
	}
	
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		
		cout << c[a / b] << '\n';
	}
	
	return 0;
}
