#include <iostream>
using namespace std;

char farm[100][100];

int main() {
	
	int n, r, c;
	cin >> n >> r >> c;
	
	int status = 0;
	
	if ((r + c) % 2 == 1)
		status = 1;
	
	// if 1, sum is odd
	if (status) {
		
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				
				if ((i + j) % 2 == 1)
					farm[i][j] = 'v';
				else farm[i][j] = '.';
			}
		}
		
	}
	
	else {
		
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				
				if ((i + j) % 2 == 1)
					farm[i][j] = '.';
				else farm[i][j] = 'v';
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << farm[i][j];
		}
		cout << '\n';
	}
	
	return 0;
}
