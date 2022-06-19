#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	cin >> s;
	
	char c = s[0];
	int sum = 10;	
		
	for (int i = 1; i < s.size(); i++) {
		if (c == s[i]) {
			sum += 5;
		} else {
			sum += 10;
			c = s[i];
		}
	}
	
	cout << sum << endl;
	
	return 0;
}
