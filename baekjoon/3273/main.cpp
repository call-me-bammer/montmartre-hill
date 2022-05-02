#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, k, x;
	cin >> n;
	
	int cnt = 0;
	
	set<int> s;
	vector<int> v;
	
	for (int i = 0; i < n; i++) {
		cin >> k;
		s.insert(k);
		v.push_back(k);
	}
	
	cin >> x;
	
	for (auto i : v) {
		if (s.find(x - i) != s.end()) {
			cnt++;
		}
	}
	
	cout << cnt / 2 << '\n';
	
	return 0;
}
