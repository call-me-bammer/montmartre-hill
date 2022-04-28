#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	string agent;
	
	int cnt = 0;
	
	for (int i = 0; i < 5; i++) {
		cin >> agent;
		
		for (int j = 0; j < agent.size() - 2; j++) {
			if (agent.substr(j, 3) == "FBI") {
				cout << i + 1 << ' ';
				cnt++;
				break;
			}
		}
	}

	if (cnt == 0) {
		cout << "HE GOT AWAY!\n";
	} else {
		cout << "\n";
	}
	
	return 0;
}
