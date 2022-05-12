#include <iostream>
#include <string>
using namespace std;

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	string s;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> s;
		
		if ((s[s.size() - 1] - '0') % 2 == 0)
			cout << "even\n";
		else cout << "odd\n";
	}
	
	return 0;
}
