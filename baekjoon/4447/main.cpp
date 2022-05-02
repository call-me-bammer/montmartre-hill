#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, space;
	cin >> n;
	cin.ignore();
	
	string s;
	
	for (int i = 0; i < n; i++) {
		
		getline(cin, s);

		int good = 0;
		int bad = 0;
		
		for (int j = 0; j < s.size(); j++) {
			if (tolower(s[j]) == 'g')
				good++;
			else if (tolower(s[j]) == 'b')
				bad++;
		}
		
		if (good > bad)
			cout << s << " is GOOD\n";
		else if (good < bad)
			cout << s << " is A BADDY\n";
		else
			cout << s << " is NEUTRAL\n";
	}
	
	return 0;
}
