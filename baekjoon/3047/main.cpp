#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {

	int arr[3];
	vector<int> order;
	string s;
	
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	
	cin >> s;
	
	sort(arr, arr + 3);
	
	for (int i = 0; i < 3; i++) {
		if (s[i] == 'A')
			order.push_back(0);
		else if (s[i] == 'B')
			order.push_back(1);
		else
			order.push_back(2);
	}
	
	for (auto i : order) {
		cout << arr[i] << ' ';
	}
	
	cout << endl;
	
	return 0;	
}
