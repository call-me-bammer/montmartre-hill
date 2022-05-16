#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t, v, e;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> v >> e;
		cout << 2 - (v - e) << '\n';
	}
	
	return 0;
}
