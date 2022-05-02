#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	string s;
	cin.ignore();
	
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		
		s[0] = toupper(s[0]);
		
		cout << s << '\n';
	}
	
	return 0;
}
