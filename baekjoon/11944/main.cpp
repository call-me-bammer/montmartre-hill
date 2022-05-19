#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n, m;
	cin >> n >> m;
	
	string s = to_string(n);
	int len = s.size();
	
	for (int i = 0; i < n; i++) {
		
		if (len > m) {
			cout << s.substr(0, m - (len - s.size()));
			break;
		}
		
		cout << s;
		len += s.size();
	}
	
	cout << endl;
	
	return 0;
}