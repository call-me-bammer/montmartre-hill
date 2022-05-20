#include <iostream>
#include <string>
using namespace std;

int main() {

	string name;
	cin >> name;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if ((i == 1) && (j == 1))
				cout << ":" << name << ":";
			else cout << ":fan:";
		}
		cout << endl;
	}
	
	return 0;
}
