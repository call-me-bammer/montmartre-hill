#include <iostream>
using namespace std;

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int k;
	cin >> k;
	
	int p, m, wantedSeat;
	
	for (int i = 0; i < k; i++) {
		cin >> p >> m;
		
		int cantParticipates = 0;
		
		int* seats = new int[m + 1]();
		
		for (int j = 0; j < p; j++) {
			cin >> wantedSeat;
			
			if (seats[wantedSeat] == 0) {
				seats[wantedSeat]++;
			} else {
				cantParticipates++;
			}
		}
		
		delete seats;
		
		cout << cantParticipates << '\n';
	}
	
	return 0;
}
