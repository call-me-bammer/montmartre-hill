#include <iostream>
using namespace std;

int* a;
int* b;

void binary_search(int i, int l, int r);
void ternary_search(int i, int l, int r);

int main() {

	int n;
	cin >> n;
	
	a = new int[n]();
	b = new int[n]();
	
	for (int i = 0; i < n; i++) {
		binary_search(i, 0, n - 1);
		ternary_search(i, 0, n - 1);
	}
	
	int bin = 0;
	int tie = 0;
	int ter = 0;
	
	for (int i = 0; i < n; i++) {
		if (a[i] < b[i])
			bin++;
		else if (a[i] > b[i])
			ter++;
		else
			tie++;
	}
	
	cout << bin << '\n'
		 << tie << '\n'
		 << ter << '\n';
	
	delete a;
	delete b;
	
	return 0;
}

void binary_search(int i, int l, int r) {
	
	int ref = 0;
	
	while (l <= r) {
		
		int mid = (l + r) / 2;

		if (i == mid)
			break;

		else if (i < mid)
			r = mid - 1;

		else
			l = mid + 1;
		
		ref++;
	}
	
	a[i] = ref;
}

void ternary_search(int i, int l, int r) {
	
	int ref = 0;
	
	while (l <= r) {
		
		int lt = l + (r - l) / 3;
		int rt = r - (r - l) / 3;
	
		if (i == lt)
			break;
			
		if (i == rt) {
			ref++;
			break;
		}
		
		else if (i < lt) {
			r = lt - 1;
		}
		
		else if (i < rt) {
			l = lt + 1;
			r = rt - 1;
		}
		
		else
			l = rt + 1;
		
		ref += 2;
	}
	
	b[i] = ref;
}
