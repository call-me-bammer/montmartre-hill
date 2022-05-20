#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n, k;
	cin >> n >> k;
	
	int** a = new int*[7];
	for (int i = 1; i <= 6; i++)
		a[i] = new int[2]();
	
	int s, y;
	
	for (int i = 0; i < n; i++) {
		cin >> s >> y;
		
		a[y][s]++;
	}
	
	int cnt = 0;
	
	for (int i = 1; i <= 6; i++) {
		for (int j = 0; j < 2; j++) {
			cnt += ceil((double)a[i][j] / k);
		}
	}
	
	cout << cnt << endl;
	
	for (int i = 0; i < 7; i++)
		delete a[i];
	delete a;
	
	return 0;
}
