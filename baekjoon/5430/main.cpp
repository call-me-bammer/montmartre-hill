#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t, n;
	cin >> t;
	
	string cmd;
	string elem;
	
	int a[100001];
	
	for (int i = 0; i < t; i++) {
		cin >> cmd >> n;
		
		int l = 0;
		int r = n - 1;
		
		int rCnt = 0;
		int dCnt = 0;
		
		for (int j = 0; j < cmd.size(); j++) {
			
			if (cmd[j] == 'R') {
				rCnt++;
				continue;
			}
			
			// pop front
			if (rCnt % 2 == 0) {
				l++;
			}
			
			// pop back
			else {
				r--;
			}
			
			dCnt++;
		}
		
		cin >> elem;
		
		if (dCnt > n) {
			cout << "error\n";
			continue;
		}
		
		istringstream ss(elem.substr(1, elem.size() - 2));
		int z = 0;
		string v;
		
		//cin.ignore();
		while (getline(ss, v, ',')) {
			a[z] = stoi(v);
			z++;
		}
		
		// designate print direction
		int status = (rCnt % 2 == 0 ? 1 : 0);
		
		cout << '[';
		if (status == 1) {
			for (int j = l; j <= r; j++) {
				cout << a[j];
				if (j != r)
					cout << ',';
			}
		} else {
			for (int j = r; j >= l; j--) {
				cout << a[j];
				if (j != l)
					cout << ',';
			}
		}
		cout << "]\n";
	}
	
	return 0;
}
