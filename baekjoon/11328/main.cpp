#include <iostream>
#include <string>
using namespace std;

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	string raw, mod;
	int flag;
	
	for (int i = 0; i < n; i++) {
		cin >> raw >> mod;
		
		int* r = new int[26]();
		int* m = new int[26]();
		
		for (int j = 0; j < raw.size(); j++) {
			r[raw[j] - 'a']++;	
		}
		
		for (int j = 0; j < mod.size(); j++) {
			m[mod[j] - 'a']++;	
		}
		
		flag = 1;
		
		for (int j = 0; j < 26; j++) {
			if (r[j] != m[j]) {
				flag = -1;
			}
		}
		
		if (flag == 1) {
			cout << "Possible\n";
		} else {
			cout << "Impossible\n";
		}
		
		delete r;
		delete m;
	}
	
	return 0;
}
