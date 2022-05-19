#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	string s;
	
	while (1) {
		
		getline(cin, s);
		
		if (s == "END")
			break;
		
		reverse(s.begin(), s.end());
		cout << s << '\n';
	}
	
	return 0;	
}
