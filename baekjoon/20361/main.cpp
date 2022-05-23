#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int n, x, k;
	cin >> n >> x >> k;
	
	int* cups = new int[n + 1]();
	cups[x] = 1;
	
	int a, b;
	
	for (int i = 0; i < k; i++) {
		cin >> a >> b;
		
		int tmp = cups[a];
		cups[a] = cups[b];
		cups[b] = tmp;
	}
	
	cout << max_element(cups, cups + n + 1) - cups << endl;
	
	delete cups;
	
	return 0;
}