#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	cin.ignore();
	
	string s, split;
	for (int i = 0; i < t; i++) {
		getline(cin, s);
		
		istringstream ss(s);
		
		while (ss >> split) {
			reverse(split.begin(), split.end());
			cout << split << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}
