#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	
	int n;
	int numberSum = 0;
	
	unordered_map<int, int> map;
	int maxCount = 1;
	
	for (int i = 0; i < 10; i++) {
		cin >> n;
		
		numberSum += n;
		
		auto item = map.find(n);
		
		if (item != map.end()) {
			item->second++;
			
			if (maxCount < item->second)
				maxCount = item->second;
				
		} else {
			map[n] = 1;
		}
	}
	
	int numberAvg = numberSum / 10;
	
	cout << numberAvg << endl;
		
	for (auto iter = map.begin(); iter != map.end(); iter++) {
		if (iter->second == maxCount) {
			cout << iter->first << endl;
			break;
		}
	}
	
	return 0;
}
