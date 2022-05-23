#include <iostream>
using namespace std;

int main() {

	int n, v;
	cin >> n;
	
	int maxVote = 0;
	int maxCand;
	
	for (int i = 1; i <= n; i++) {
		cin >> v;
		
		if (maxVote < v) {
			maxVote = v;
			maxCand = i;
		}
	}
	
	if (maxCand == 1) {
		cout << "S" << endl;
	} else {
		cout << "N" << endl;
	}
	
	return 0;
}
