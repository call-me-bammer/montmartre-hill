#include <iostream>
using namespace std;

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	int a, b;
	string plainText;
	
	for (int i = 0; i < t; i++) {
		cin >> a >> b >> plainText;
		
		string cipherText;
		
		for (int j = 0; j < plainText.size(); j++) {
			cipherText += ((a * (plainText[j] - 'A') + b) % 26) + 'A';
		}
		
		cout << cipherText << '\n';
	}
	
	return 0;
}
