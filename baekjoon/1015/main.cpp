#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

bool cmp_first(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

bool cmp_second(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

int main() {

	int n, e;
	cin >> n;
	
	vector<pair<int, int>> a;
	
	int max = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> e;
		
		if (max < e)
			max = e;
		
		a.push_back(make_pair(e, i));
	}

	sort(a.begin(), a.end(), cmp_first);
	queue<int>* q = new queue<int>[max + 1];
	
	for (int i = 0; i < n; i++) {
		q[a[i].first].push(i);
	}

	sort(a.begin(), a.end(), cmp_second);
	
	for (int i = 0; i < n; i++) {
		cout << q[a[i].first].front() << ' ';
		q[a[i].first].pop();
	}
	cout << '\n';
	
	return 0;
}
