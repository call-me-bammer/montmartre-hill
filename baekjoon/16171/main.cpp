#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	string s, m;
	string k;
	
	cin >> s >> k;
	
	int kidx = 0;
	int klen = k.size();
	
	int status = 0;
	
	for (int i = 0; i < s.size(); i++) {
		
		if (s[i] < 'A')
			continue;

		m += s[i];
	}
	
	for (int i = 0; i < m.size(); i++) {
		if (m.substr(i, klen) == k) {
			status = 1;
			break;
		}
	}

	cout << status << '\n';
	
	return 0;
}
