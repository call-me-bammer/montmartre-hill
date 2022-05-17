#include <iostream>
using namespace std;

int main() {

	int n, v;
	cin >> n;
	
	int* a = new int[n]();
	
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	cin >> v;
	
	int cnt = 0;
	
	for (int i = 0; i < n; i++) {
		if (a[i] == v) {
			cnt++;
		}
	}
	
	cout << cnt << endl;
	
	return 0;
}
