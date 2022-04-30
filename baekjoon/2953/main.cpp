#include <iostream>
using namespace std;

int main() {

	int maxScore = 0;
	int maxParti = 0;
	int score = 0;
	
	for (int i = 0; i < 5; i++) {
		
		int sum = 0;
		
		for (int j = 0; j < 4; j++) {
			cin >> score;
			sum += score;
			
			if (maxScore < sum) {
				maxScore = sum;
				maxParti = i + 1;
			}
		}
	}
	
	cout << maxParti << ' ' << maxScore << endl;
	
	return 0;	
}
