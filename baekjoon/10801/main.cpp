#include <iostream>
using namespace std;

int main() {

	int a[10];
	int b[10];
	
	int awin = 0, bwin = 0;
	
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	
	for (int i = 0; i < 10; i++)
		cin >> b[i];
	
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) awin++;
		else if (a[i] < b[i]) bwin++;
	}
	
	if (awin > bwin)
		cout << "A" << endl;
	
	else if (awin < bwin)
		cout << "B" << endl;
	
	else cout << "D" << endl;
	
	return 0;
}
