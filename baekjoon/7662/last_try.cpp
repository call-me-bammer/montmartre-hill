#include <iostream>
#include <queue>
#include <vector>
#include <map>
using namespace std;

template<typename T>
void print_queue(T q) {
	
	while (!q.empty()) {
		cout << q.top() << ' ';
		q.pop();
	}
	
	cout << '\n';
}

void print_map(map<int, int> m) {
	
	map<int, int>::iterator iter;
	
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->second << ' ';
	}
	
	cout << '\n';
}

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
				
				//print_map(map);
				//print_queue(max);
				//print_queue(min);
			}
			
			// pop max
			else if (n == 1) {
				if (!max.empty()) {
					map[max.top()]--;
					max.pop();
				}
				

				
				//print_map(map);
				//print_queue(max);
				//print_queue(min);
			}
			
			// pop min
			else {
				if (!min.empty()) {
					map[min.top()]--;
					min.pop();
				}
				

				
				//print_map(map);
				//print_queue(max);
				//print_queue(min);
			}
		}
		
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
