#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int v;
	int cnt = 0;
	string s;

	cin >> v >> s;

	for (int i = 0; i < v; i++) {
		if (s[i] == 'A')
			cnt++;
	}

	if (cnt == v - cnt)
		cout << "Tie\n";
	else if (cnt < v - cnt)
		cout << "B\n";
	else cout << "A\n";

	return 0;	
}

