#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	if (n == 3) {
		cout << 0 << endl;
		return 0;
	}
	
	int meets = 1;
	
	// 다각형의 대각선 교점의 개수 : nC4
	// n개의 모든 꼭짓점에서 4개를 선택하면 각각 1개의 교점을 갖는다

	for (int i = n; i > n - 4; i--) {
		meets *= i;
	}
	
	meets /= 4 * 3 * 2;
	
	cout << meets << endl;
	
	return 0;
}
