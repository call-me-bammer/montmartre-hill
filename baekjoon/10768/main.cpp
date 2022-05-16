#include <iostream>
using namespace std;

int main() {
	int m, d;
	cin >> m >> d;
	
	if ((m == 2) && (d == 18))
		cout << "Special" << endl;
	
	else if ((m < 2) || ((m == 2) && (d < 18)))
		cout << "Before" << endl;
	
	else cout << "After" << endl;
	
	return 0;
}
