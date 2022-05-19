#include <iostream>
#include <string>
using namespace std;

int main() {

	string plainText;
	getline(cin, plainText);
	
	string cipherText;
	
	for (int i = 0; i < plainText.size(); i++) {
		
		if ((plainText[i] == ' ') || (plainText[i] < 'A')) {
			cipherText += plainText[i];
			continue;
		}
		
		// uppercase
		if (plainText[i] < 'a') {
			cipherText += plainText[i] < 'N' ? plainText[i] + 13 : plainText[i] + 13 - 'Z' + 'A' - 1;
		} else {
			cipherText += plainText[i] < 'n' ? plainText[i] + 13 : plainText[i] + 13 - 'z' + 'a' - 1;
		}
		
	}
	
	cout << cipherText << endl;
	
	return 0;
}
