#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);

	string s;
	
	while (!cin.eof()) {
		
		getline(cin, s);
		
		if (s.size() == 0)
			continue;
		
		int upper = 0;
		int lower = 0;
		int digit = 0;
		int space = 0;
		
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ')
				space++;
			else if (s[i] >= 'a')
				lower++;
			else if (s[i] >= 'A')
				upper++;
			else digit++;
		}
		
		cout << lower << ' ' << upper << ' ' << digit << ' ' << space << '\n';
	}
	
	return 0;
}
