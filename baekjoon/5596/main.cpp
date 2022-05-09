#include <iostream>
using namespace std;

int main() {

	int score;
	
	int aSum = 0, bSum = 0;
	
	for (int i = 0; i < 8; i++) {
		cin >> score;
		
		if (i < 4)
			aSum += score;
		else
			bSum += score;
	}
	
	cout << (aSum > bSum ? aSum : bSum) << endl;
	
	return 0;
}
