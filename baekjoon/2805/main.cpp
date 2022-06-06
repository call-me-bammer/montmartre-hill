#include <iostream>
using namespace std;

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, m;
	cin >> n >> m;
	
	int* a = new int[n]();
	
	int max = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		
		if (a[i] > max)
			max = a[i];
	}
	
	int s = 0;
	int e = max;
	
	int h = 0;
	int ans = 0;
	
	while (s <= e) {
		h = (s + e) / 2;
		
		long long res = 0;
		
		for (int i = 0; i < n; i++)
			res += (a[i] > h ? a[i] - h : 0);

		if (res < m)
			e = h - 1;
		
		else {
			s = h + 1;
			ans = h;
		}
	}
	
	cout << ans << '\n';
	
	delete a;
	
	return 0;
}
