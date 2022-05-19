#include <iostream>
#include <string>
using namespace std;

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, p;
	cin >> n;
	
	int maxPrice;
	string maxName;
	
	int price;
	string name;
	
	for (int i = 0; i < n; i++) {
		cin >> p;
		
		maxPrice = 0;
		
		for (int j = 0; j < p; j++) {
			cin >> price >> name;
			
			if (maxPrice < price) {
				maxPrice = price;
				maxName = name;
			}
		}
		
		cout << maxName << '\n';
	}
	
	return 0;	
}
