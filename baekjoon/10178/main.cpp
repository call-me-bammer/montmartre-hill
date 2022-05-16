#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t, c, v;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> c >> v;
		
		cout << "You get " << c / v << " piece(s)"
			 << " and your dad gets " << c % v << " piece(s).\n";
	}
	
	return 0;	
}
