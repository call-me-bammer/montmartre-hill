#include <iostream>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;
	
	int n;
	cin >> n;
	
	int maxScore = 0;
	int ac, bc, cc;
	
	for (int i = 0; i < n; i++) {
		
		int score = 0;
		
		for (int j = 0; j < 3; j++) {
			cin >> ac >> bc >> cc;
		
			score += a * ac + b * bc + c * cc;
		}
		
		if (score > maxScore)
			maxScore = score;
	}
	
	cout << maxScore << endl;
	
	return 0;
}
