#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	string a, b;
	
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		
		int dist = 0;
		cout << "Distances: ";
		
		for (int j = 0; j < a.size(); j++) {
			
			dist = abs(a[j] - b[j]);
			
			if (a[j] > b[j])
				dist = 26 - dist;
				
			cout << dist << ' ';
		}
		
		cout << '\n';
	}
	
	return 0;	
}
