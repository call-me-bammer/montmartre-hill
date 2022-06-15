#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int a[51];
int b[51];

int main() {

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}

	sort(b, b + n);
	
	queue<int>* q = new queue<int>[*max_element(a, a + n) + 1];

	for (int i = 0; i < n; i++)
		q[b[i]].push(i);
	
	for (int i = 0; i < n; i++) {
		cout << q[a[i]].front() << ' ';
		q[a[i]].pop();
	}
	cout << endl;
	
	return 0;	
}
