#include <iostream>
using namespace std;

int main() {

	int a, b, c;
	
	while (1) {
		cin >> a >> b;
		
		if ((a == 0) && (b == 0))
			break;
		
		cout << a - (b - a) << endl;
	}
	
	return 0;
}
