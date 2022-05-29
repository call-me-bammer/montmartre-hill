#include <iostream>
using namespace std;

int main() {

	int n, a, b;
	cin >> n >> a >> b;
	
	int out = a / 2 + b;
	
	cout << (n > out ? out : n) << endl;
	return 0;
}
