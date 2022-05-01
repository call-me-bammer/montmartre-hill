#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	// value & flag
	vector<pair<int, int>> v;
	
	int n;
	int sum = 0;
	
	for (int i = 0; i < 9; i++) {
		cin >> n;
		sum += n;
		v.push_back(make_pair(n, 1));
	}
	
	vector<int> combi = {0, 0, 0, 0, 0, 0, 0, 1, 1};
	
	sort(combi.begin(), combi.end());
	
	do {
		
		int sub = 0;
		vector<pair<int, int>> copy;
		
		copy.assign(v.begin(), v.end());
		
		int idx = 0;
		
		for (auto i : combi) {
			
			if (i == 1) {
				sub += v[idx].first;
				copy[idx].second = 0;
			}
			idx++;
		}
		
		if (sub == sum - 100) {
			v.clear();
			v.assign(copy.begin(), copy.end());
			break;
		}
		
	} while (next_permutation(combi.begin(), combi.end()));
	
	for (auto i : v) {
		if (i.second == 1) {
			cout << i.first << endl;
		}
	}
	
	return 0;
}
