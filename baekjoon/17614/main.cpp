#include <iostream>
#include <string>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	int count = 0;
	
	for (int i = 1; i <= n; i++) {
		string s = to_string(i);
		
		for (int j = 0; j < s.size(); j++) {
			if ((s[j] == '3') || (s[j] == '6') || (s[j] == '9'))
				count++;
		}
	}
	
	cout << count << endl;
	return 0;
}
