#include <iostream>
using namespace std;

int a[100001];

int main() {

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int cnt = 0;
	int max = 0;
	
	for (int i = n - 1; i >= 0; i--) {
		if (max < a[i]) {
			max = a[i];
			cnt++;
		}
	}
	
	cout << cnt << endl;
	
	return 0;
}
