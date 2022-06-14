#include <iostream>
#include <algorithm> // for distance()
#include <vector>
#include <string>
#include <cmath>
#include <map>
using namespace std;

string colorList[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

bool cmp(pair<string, long long>& a, pair<string, long long>& b) {
	return a.second < b.second;
}

int main() {

	string color;
	string out = "";
	
	map<string, long long> m;
	vector<string> v;
	
	for (int i = 0; i < sizeof(colorList) / sizeof(string); i++) {
		m[colorList[i]] = pow(10, i);
		v.push_back(colorList[i]);
	}
	
	cin >> color;
	out += distance(v.begin(), find(v.begin(), v.end(), color)) + '0';
	
	cin >> color;
	out += distance(v.begin(), find(v.begin(), v.end(), color)) + '0';
	
	cin >> color;
	cout << stoi(out) * m[color] << '\n';
	
	return 0;
}
