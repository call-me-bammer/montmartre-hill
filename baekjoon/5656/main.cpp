#include <iostream>
#include <string>
using namespace std;

int main() {

	int a, b;
	string opr;
	
	bool result = true;
	
	for (int i = 1; ; i++) {
		
		cin >> a >> opr >> b;
		
		if (opr == "E")
			break;
		
		else if (opr == ">") {
			result = a > b;
		}
		
		else if (opr == ">=") {
			result = a >= b;
		}
		
		else if (opr == "<") {
			result = a < b;
		}
		
		else if (opr == "<=") {
			result = a <= b;
		}
		
		else if (opr == "==") {
			result = a == b;
		}
		
		else if (opr == "!=") {
			result = a != b;
		}
		
		cout << "Case " << i << ": "
			 << (result == true ? "true" : "false") << endl;
	}
	
	return 0;
}
