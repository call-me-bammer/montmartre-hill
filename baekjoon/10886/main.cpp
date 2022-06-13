#include <iostream>
using namespace std;

int main() {

	int n, v;
	cin >> n;
	
	int cute = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> v;
		
		if (v == 1)
			cute++;
	}
	
	if (cute > n / 2)
		cout << "Junhee is cute!\n";
	else cout << "Junhee is not cute!\n";
	
	
	return 0;
}
