#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	int x, y, z;
	string o, eq;
	
	bool b;
	
	for (int i = 1; i <= t; i++) {
		cin >> x >> o >> y >> eq >> z;
	
		cout << "Case " << i << ": ";
		
		if (o == "+") {
			b = (x + y) == z;
		} else {
			b = (x - y) == z;
		}
		
		cout << (b == true ? "YES" : "NO") << '\n';
	}
	
	return 0;
}
