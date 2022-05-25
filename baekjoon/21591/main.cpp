#include <iostream>
using namespace std;

int main() {

	int wc, hc, ws, hs;
	cin >> wc >> hc >> ws >> hs;
	
	if ((wc - ws < 2) || (hc - hs < 2))
		cout << 0 << endl;
	else
		cout << 1 << endl;
	
	return 0;
}
