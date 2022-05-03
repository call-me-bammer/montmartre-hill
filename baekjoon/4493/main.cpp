#include <iostream>
using namespace std;

int rps(char a, char b);

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int t, n;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		
		int result = 0;
		char a, b;
		
		for (int j = 0; j < n; j++) {
			cin >> a >> b;
			
			result += rps(a, b);
		}
		
		if (result > 0)
			cout << "Player 1\n";
		else if (result < 0)
			cout << "Player 2\n";
		else
			cout << "TIE\n";
	}
	
	return 0;	
}

int rps(char a, char b) {
	
	if (a == 'R') {
		if (b == 'R') return 0;
		else if (b == 'P') return -1;
		return 1;
	}
	
	else if (a == 'P') {
		if (b == 'R') return 1;
		else if (b == 'P') return 0;
		return -1;
	}
	
	else {
		if (b == 'R') return -1;
		else if (b == 'P') return 1;
		return 0;
	}
}
