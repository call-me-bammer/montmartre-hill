#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	int apple, student;
	
	int sum = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> student >> apple;
		
		sum += apple % student;
	}
	
	cout << sum << endl;
	
	return 0;
}
