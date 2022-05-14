#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin >>t;
	
	string s;
	
	for (int i = 0; i < t; i++) {
		cin >> s;
		
		cout << s[0] << s[s.size() - 1] << '\n';
	}
	
	return 0;
}
