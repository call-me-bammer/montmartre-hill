#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	int x;
	
	for (int i = 0; i < t; i++) {
		cin >> x;
		
		string s = to_string(x);
		int* a = new int[10]();
		
		for (int j = 0; j < s.size(); j++) {
			if (a[s[j] - '0'] == 0) {
				a[s[j] - '0'] = 1;
			}
		}
		
		int cnt = 0;
		
		for (int j = 0; j < 10; j++) {
			if (a[j] == 1) {
				cnt++;
			}
		}
		
		cout << cnt << '\n';
		
		delete a;
	}
		
	return 0;
}
