#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	cin >> s;
	
	int joi = 0;
	int ioi = 0;
	
	for (int i = 0; i < s.size() - 2; i++) {
		if (s.substr(i, 3) == "JOI")
			joi++;
		else if (s.substr(i, 3) == "IOI")
			ioi++;
	}
	
	cout << joi << '\n' << ioi << '\n';
	
	return 0;
}
