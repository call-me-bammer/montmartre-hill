#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float zeroPlusMinus(char c);

int main() {

	string letterScore;
	cin >> letterScore;
	
	float numberScore = 0.0;
	
	if (letterScore[0] == 'A') {
		numberScore = 4.0 + (zeroPlusMinus(letterScore[1]));
	} else if (letterScore[0] == 'B') {
		numberScore = 3.0 + (zeroPlusMinus(letterScore[1]));
	} else if (letterScore[0] == 'C') {
		numberScore = 2.0 + (zeroPlusMinus(letterScore[1]));
	} else if (letterScore[0] == 'D') {
		numberScore = 1.0 + (zeroPlusMinus(letterScore[1]));
	}
	
	cout << fixed << setprecision(1) << numberScore << endl;
	
	return 0;
}

// return adder adjust with '0', '+', '-'
float zeroPlusMinus(char c) {
	
	float adder = 0.0;
		
	if (c == '+') {
		adder += 0.3;
	} else if (c == '-') {
		adder -= 0.3;
	}
		
	return adder;
}
