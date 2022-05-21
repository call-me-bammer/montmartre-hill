#include <iostream>
using namespace std;

int main() {

	int by, bm, bd;
	int py, pm, pd;
	
	cin >> by >> bm >> bd
		>> py >> pm >> pd;
	
	int man, cnt, year;
	

	year = py - by;
	cnt = year + 1;
	
	man = year - 1 + ( pm > bm ? 1 : (((pm == bm) && (pd >= bd)) ? 1 : 0) );
	
	cout << man << endl
		 << cnt << endl
		 << year << endl;
	
	return 0;
}
