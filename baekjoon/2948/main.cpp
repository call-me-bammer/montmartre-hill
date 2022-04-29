#include <iostream>
#include <string>
using namespace std;

string daysOfWeek[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

int daysOfMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

int main() {
	
	int d, m;
	cin >> d >> m;
	
	int passedDaysFromOrigin = 0;
	
	for (int i = 1; i < m; i++) {
		passedDaysFromOrigin += daysOfMonth[i];
	}
	
	passedDaysFromOrigin += d - 1;
	
	cout << daysOfWeek[passedDaysFromOrigin % 7] << endl;
	
	return 0;
}
