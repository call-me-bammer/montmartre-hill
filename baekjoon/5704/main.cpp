#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string s;
	
	while (1) {
	
		getline(cin, s);
		
		if (s == "*")
			break;
		
		int* a = new int[26]();
		bool b = true;
		
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ')
				continue;
			
			a[s[i] - 'a']++;
		}
		
		for (int i = 0; i < 26; i++) {
			if (a[i] == 0) {
				b = false;
				break;
			}
		}
		
		cout << (b == true ? 'Y' : 'N') << endl; 
		
		delete a;
	}
	
	return 0;
}
