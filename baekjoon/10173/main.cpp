#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	while (1) {
		getline(cin, s);

		if (s == "EOI")
			break;

		int state = 0;

		for (int i = 0; i < s.size() - 3; i++) {
			string t = s.substr(i, 4);
			for (int j = 0; j < 4; j++)
				t[j] = tolower(t[j]);
			
			if (t == "nemo") {
				state = 1;
				break;
			}
		}

		if (state == 1)
			cout << "Found\n";
		else cout << "Missing\n";
	}	
}

