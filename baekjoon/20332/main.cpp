#include <iostream>
using namespace std;

int main() {

	int n, w;
	cin >> n;
	
	int sum = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> w;
		sum += w;
	}
	
	if (sum % 3 == 0)
		cout << "yes" << endl;
	
	else
		cout << "no" << endl;
	
	return 0;
}
