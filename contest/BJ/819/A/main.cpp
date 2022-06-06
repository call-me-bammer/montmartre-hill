#include <iostream>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;
	
	double sheid = a - a * ((double)b / 100);
	
	if (sheid >= 100)
		cout << 0 << endl;
	
	else
		cout << 1 << endl;
	
	return 0;
}
