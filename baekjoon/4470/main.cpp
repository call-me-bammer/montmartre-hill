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
	
	for (int i = 1; i <= n; i++) {
		getline(cin, s);
		
		cout << i << ". " << s << "\n";
	}
	
	return 0;
}
