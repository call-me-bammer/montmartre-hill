#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int phase = 1;

int main() {

	int x;
	cin >> x;

	// <visit phase, from
	vector<pair<int, int>> v(x + 1);

	queue<int> q;
	q.push(x);
	v[x].first = phase;
	
	int qCnt = q.size();
	
	phase++;
	
	while (v[1].first == 0) {
		
		int r = q.front();
		q.pop();
		qCnt--;
		
		if ((r % 3 == 0) && (v[r / 3].first == 0)) {
			q.push(r / 3);
			v[r / 3].first = phase;
			v[r / 3].second = r;
		}
		
		if ((r % 2 == 0) && (v[r / 2].first == 0)) {
			q.push(r / 2);
			v[r / 2].first = phase;
			v[r / 2].second = r;
		}
		
		if ((r > 1) && (v[r - 1].first == 0)) {
			q.push(r - 1);
			v[r - 1].first = phase;
			v[r - 1].second = r;
		}
		
		if (qCnt == 0) {
			qCnt = q.size();
			phase++;
		}
	}
	
	cout << v[1].first - 1 << '\n';
	
	vector<int> out;
	
	int i = 1;
	out.push_back(i);
	
	while (i != x) {
		i = v[i].second;
		out.push_back(i);
	}
	
	reverse(out.begin(), out.end());
	
	for (auto j : out) {
		cout << j << ' ';
	}
	cout << '\n';
	
	return 0;	
}
