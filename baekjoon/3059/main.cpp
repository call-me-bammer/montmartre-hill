#include <iostream>
#include <string>
using namespace std;

int main() {

	int t;
	cin >> t;
	
	string s;
	
	for (int i = 0; i < t; i++) {
		cin >> s;
		
		int sum = 0;
		int* a = new int[26]();
		
		for (int j = 0; j < s.size(); j++) {
			a[s[j] - 'A']++;
		}
		
		for (int j = 0; j < 26; j++) {
			if (a[j] == 0) {
				sum += 'A' + j;
			}
		}
		
		cout << sum << endl;
	}
	
	return 0;
}
