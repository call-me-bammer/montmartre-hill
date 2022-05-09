#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

bool cmp(pair<string, list<int>> a, pair<string, list<int>> b);

int main() {

	int n;
	
	string name;
	int dd, mm, yyyy;
	
	vector<pair<string, list<int>>> v;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> name >> dd >> mm >> yyyy;
		
		list<int> l;
		l.push_back(yyyy);
		l.push_back(mm);
		l.push_back(dd);
		
		v.push_back(make_pair(name, l));
	}
	
	sort(v.begin(), v.end(), cmp);
	
	cout << v.back().first << endl << v.front().first << endl;
	
	return 0;
}

bool cmp(pair<string, list<int>> a, pair<string, list<int>> b) {

	
	list<int> p = a.second;
	list<int> q = b.second;
	
	while (!p.empty()) {
		
		int x = p.front();
		int y = q.front();
		
		if (x > y) return false;
		else if (x < y) return true;
		
		p.pop_front();
		q.pop_front();
	}
	
	return true;
}
