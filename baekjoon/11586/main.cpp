#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	
	int n, k;
	cin >> n;
	
	string* s = new string[n];
	
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	
	cin >> k;
	
	if (k == 1) {
		for (int i = 0; i < n; i++) {
			cout << s[i] << '\n';
		}
	}
	
	else if (k == 2) {
		for (int i = 0; i < n; i++) {
			reverse(s[i].begin(), s[i].end());
			cout << s[i] << '\n';
		}
	}
	
	else {
		for (int i = n - 1; i >= 0; i--) {
			cout << s[i] << '\n';
		}
	}
	
	return 0;	
}
