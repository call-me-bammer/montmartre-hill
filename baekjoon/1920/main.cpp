#include <iostream>
#include <algorithm>
using namespace std;

bool binary_search(int* a, int s, int e, int t);

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, m, b;
	cin >> n;
	
	int* a = new int[n + 1]();
	
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	
	sort(a + 1, a + n + 1);
	
	cin >> m;
	
	for (int i = 0; i < m; i++) {
		cin >> b;
		
		if (binary_search(a, 1, n, b))
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}
	
	delete a;
	
	return 0;
}

bool binary_search(int* a, int s, int e, int t) {
	
	int start = s;
	int end = e;
	int mid;
	
	while (start <= end) {
		mid = (start + end) / 2;
	
		if (a[mid] == t)
			return true;
		
		else if (a[mid] < t)
			start = mid + 1;
		
		else
			end = mid - 1;
	}
	
	return false;	
}
