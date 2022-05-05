#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, a, b;
	cin >> n;
	
	int aCnt = 0, bCnt = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a > b) aCnt++;
		else if (a < b) bCnt++;
	}
	
	cout << aCnt << ' ' << bCnt << '\n';
	
	return 0;
}
