#include <iostream>
#include <algorithm>
using namespace std;

int a[10][10];

int main()
{
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cin >> a[i][j];
		}
	}
	
	int max = 0;
	int idx = 1, jdx = 1;
	
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
				idx = i;
				jdx = j;
			}
		}
	}
		
	cout << max << endl
		 << idx << ' ' << jdx << endl;

	return 0;
}
