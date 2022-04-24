#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string s;
	cin >> s;
	
	string out;
	
	for (int i = 0; i < s.size(); i++) {
		
		if (s[i] < 'a') {
			out += tolower(s[i]);
			continue;
		}
		
		out += toupper(s[i]);
	}
	
	cout << out << endl;
	
	return 0;
}
