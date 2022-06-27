#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int sum = 0;
	
	int a[4];
	int b[2];
	
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < 2; i++) {
		cin >> b[i];
	}
	
	sort(a, a + 4);
	sort(b, b + 2);
	
	reverse(a, a + 4);
	reverse(b, b + 2);
	
	for (int i = 0; i < 3; i++) {
		sum += a[i];
	}
	
	for (int i = 0; i < 1; i++) {
		sum += b[i];
	}
	
	cout << sum << endl;
	
	return 0;
}
