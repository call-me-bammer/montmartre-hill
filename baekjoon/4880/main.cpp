#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int a1, a2, a3;
	
	while (1) {
		
		cin >> a1 >> a2 >> a3;
		
		if ((a1 == 0) && (a2 == 0) && (a3 == 0))
			break;
		
		if ((a2 - a1) == (a3 - a2)) {
			cout << "AP " << a3 + (a2 - a1) << '\n';
		}
		
		else {
			cout << "GP " << a3 * (a2 / a1) << '\n';
		}
		
	}
	
	return 0;
}
