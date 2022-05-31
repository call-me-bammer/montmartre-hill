#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	int x, y;
	
	int d[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		
		if ((x < 24) && (y < 60))
			cout << "Yes ";
		else
			cout << "No ";
		
		if (((0 < x) && (x < 13)) && ((0 < y) && (y <= d[x])))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	
	return 0;
}
