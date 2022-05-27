#include <iostream>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	char c;
	int t, k, n;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		
		cin >> k;
		
		priority_queue<int, vector<int>> max;
		priority_queue<int, vector<int>, greater<int>> min;
		map<int, int> map;
		
		for (int j = 0; j < k; j++) {
			
			cin >> c >> n;
			
			// insert
			if (c == 'I') {
				map[n]++;
				max.push(n);
				min.push(n);
			}
			
			// delete max
			else if (n == 1) {
				while (!max.empty() && map[max.top()] == 0)
					max.pop();
				
				if (!max.empty()) {
					map[max.top()]--;
					max.pop();
				}
			}
			
			// delete min
			else {
				while (!min.empty() && map[min.top()] == 0)
					min.pop();
				
				if (!min.empty()) {
					map[min.top()]--;
					min.pop();
				}
			}
		}
		
		// clear ghost values
		while (!max.empty() && map[max.top()] == 0)
			max.pop();
		
		while (!min.empty() && map[min.top()] == 0)
			min.pop();
		
		if (max.empty() || min.empty()) {
			cout << "EMPTY\n";
		}
		
		else {
			cout << max.top() << ' ' << min.top() << '\n';
		}
	}	
	
	return 0;
}
