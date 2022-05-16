#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	int happy = 0;
	int sad = 0;
	
	for (int i = 0; i < s.size() - 2; i++) {
		if (s.substr(i, 3) == ":-)")
			happy++;
		else if (s.substr(i, 3) == ":-(")
			sad++;
	}
	
	if ((happy == 0) && (sad == 0))
		cout << "none" << endl;
	
	else if (happy == sad)
		cout << "unsure" << endl;
	
	else if (happy > sad)
		cout << "happy" << endl;
	
	else
		cout << "sad" << endl;
	
	return 0;
}
