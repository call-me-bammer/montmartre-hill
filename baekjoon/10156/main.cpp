#include <iostream>
using namespace std;

int main() {

	int k, n, m;
	cin >> k >> n >> m;
	
	int out = k * n - m;
	
	if (out < 0)
		cout << 0 << endl;
	else
		cout << out << endl;
	
	return 0;
}
