#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	string s;
	
	for (int i = 0; i < n; i++) {
		cin >> s;
		
		for (int j = 0; j < s.size(); j++) {
			cout << (char)tolower(s[j]);
		}
		cout << '\n';
	}
	
	return 0;
}
