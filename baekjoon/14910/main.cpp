#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int b = -1000000;	
	int status = 1;
	
	int a;
	
	while (!cin.eof()) {
		cin >> a;
	
		if (b <= a) {
			b = a;
		} else {
			status = 0;
			break;
		}
	}
	
	if (status)
		cout << "Good" << '\n';
	else cout << "Bad" << '\n';
	
	return 0;	
}
