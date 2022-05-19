#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t, n, m;
	cin >> t;
	
	int cnt;
	string tos;
	
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
	
		cnt = 0;
		
		for (int j = n; j <= m; j++) {
			
			tos = to_string(j);
			
			for (int z = 0; z < tos.size(); z++) {
				if (tos[z] == '0')
					cnt++;
			}
		}
		
		cout << cnt << '\n';
	}
	
	return 0;
}
