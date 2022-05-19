#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t, n, m;
	cin >> t;
	
	int disordered, normal;
	
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		
		disordered = m * 2 - n;
		normal = m - disordered;
		
		cout << disordered << ' ' << normal << '\n';
	}
	
	return 0;
}
