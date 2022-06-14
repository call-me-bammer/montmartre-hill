#include <iostream>
#include <cmath>
#include <map>
using namespace std;

string colorList[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

int main() {

	string color, out;
	
	map<string, long long> m;
	
	for (int i = 0; i < sizeof(colorList) / sizeof(string); i++) {
		m[colorList[i]] = i;
	}
	
	cin >> color;
	out += m[color] + '0';
	
	cin >> color;
	out += m[color] + '0';
	
	cin >> color;
	cout << stoi(out) * (long long)pow(10, m[color]) << '\n';
	
	return 0;
}
