#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	int* maxPieces = new int[n + 1]();
	maxPieces[0] = 1;
	
	int adder = 1;
	
	for (int i = 0; i < n; i++) {
		maxPieces[i+1] = maxPieces[i] + adder;
		
		if (i % 2 == 0)
			adder++;
	}
	
	cout << maxPieces[n] << endl;
	
	return 0;
}
