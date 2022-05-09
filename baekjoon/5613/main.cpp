#include <iostream>
#include <string>
using namespace std;

int calc(int a, int b, string opr);

int main() {

	string num = "", opr = "";
	
	int alter = 0;
	cin >> num;
	
	int result = stoi(num);
	alter = 1 - alter;
	
	while (1) {
	
		// get num
		if (alter == 0) {
			cin >> num;
			result = calc(result, stoi(num), opr);
		}

		// get operator
		else {
			cin >> opr;
			
			if (opr == "=")
				break;
		}
		
		alter = 1 - alter;
	}	
	
	cout << result << endl;
	
	return 0;
}

int calc(int a, int b, string opr) {
	
	if (opr == "+")
		return a + b;
	else if (opr == "-")
		return a - b;
	else if (opr == "*")
		return a * b;
	else
		return a / b;
}
