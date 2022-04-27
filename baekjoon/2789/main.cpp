#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	cin >> s;
	
	string cmp = "CAMBRIDGE";
	string censored = "";
	
	for (int i = 0; i < s.size(); i++) {
		if (cmp.find(s[i]) == string::npos) {
			censored += s[i];
		}
	}
	
	cout << censored << endl;
	
	return 0;
}
