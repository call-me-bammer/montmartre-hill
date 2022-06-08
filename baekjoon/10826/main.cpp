#include <iostream>
#include <algorithm> // for string reverse
#include <string>
using namespace std;

string str_addition(string a, string b);

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);

	string f[10001] = { "0", "1", "1" };
	
	int n;	
	cin >> n;
	
	for (int i = 3; i <= n; i++) {
		f[i] = str_addition(f[i-1], f[i-2]);
	}
	
	cout << f[n] << '\n';
	
	return 0;
}

string str_addition(string a, string b) {
	
	string out = "";
	
	string max = a;
	string min = b;
	
	int maxLen = a.size();
	int minLen = b.size();
	
	reverse(max.begin(), max.end());
	reverse(min.begin(), min.end());
	
	int adder = 0;
	
	for (int i = 0; i < maxLen; i++) {
		
		if (i < minLen) {
			out += ((max[i] + min[i] - 2 * '0' + adder) % 10) + '0';
			adder = (max[i] + min[i] - 2 * '0' + adder) / 10;
		}
		
		else {
			out += ((max[i] - '0' + adder) % 10) + '0';
			adder = (max[i] - '0' + adder) / 10;
		}
	}
	
	if (adder > 0)
		out += to_string(adder);
	
	reverse(out.begin(), out.end());

	return out;
}
