#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, k, l;
	cin >> n >> k >> l;
	
	int a, b, c;
	vector<tuple<int, int, int>> v;
	
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		
		if ((a < l) || (b < l) || (c < l))
			continue;
		
		if (a + b + c >= k) {
			v.push_back(make_tuple(a, b, c));
		}
	}
	
	cout << v.size() << '\n';
	
	for (auto t : v) {
		cout << get<0>(t) << ' ' << get<1>(t) << ' ' << get<2>(t) << ' ';
	}
	cout << '\n';
	
	return 0;
}
