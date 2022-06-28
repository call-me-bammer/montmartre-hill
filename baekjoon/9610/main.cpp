#include <iostream>
using namespace std;

int main() {

	int n, x, y;
	cin >> n;
	
	int axis = 0;
	int* q = new int[5]();
	
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		
		if ((x > 0) && (y > 0))
			q[1]++;
		else if ((x > 0) && (y < 0))
			q[4]++;
		else if ((x < 0) && (y > 0))
			q[2]++;
		else if ((x < 0) && (y < 0))
			q[3]++;
		else axis++;
	}
	
	for (int i = 1; i <= 4; i++) {
		cout << "Q" << i << ": " << q[i] << '\n';
	}
	cout << "AXIS: " << axis << '\n';

	delete q;
	
	return 0;
}
