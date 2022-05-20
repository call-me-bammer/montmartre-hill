#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	if (n % 2 == 0) {
		cout << "I LOVE CBNU" << endl;
		return 0;
	}
	
	for (int i = 0; i < n; i++)
		cout << "*";
	cout << endl;
	
	for (int i = 0; i < n / 2 + 1; i++) {
		
		if (i == 0) {
			for (int j = 0; j < n / 2; j++)
				cout << ' ';
			cout << "*" << endl;
		}
		
		else {
			for (int j = 0; j < n / 2 - i; j++)
				cout << ' ';
			cout << "*";
			
			for (int j = 0; j < i * 2 - 1; j++)
				cout << ' ';
			cout << "*" << endl;
		}
	}
	
	return 0;	
}
