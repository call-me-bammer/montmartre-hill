#include <iostream>
#include <queue>
using namespace std;

int phase = 1;

int* v;

int main() {

	int x;
	cin >> x;
	
	v = new int[x + 1]();
	
	queue<int> q;
	q.push(x);
	v[x] = phase;
	
	int qCnt = q.size();
	
	phase++;
	
	while (v[1] == 0) {
		
		int r = q.front();
		q.pop();
		qCnt--;
		
		if ((r % 3 == 0) && (v[r / 3] == 0)) {
			q.push(r / 3);
			v[r / 3] = phase;
		}
		
		if ((r % 2 == 0) && (v[r / 2] == 0)) {
			q.push(r / 2);
			v[r / 2] = phase;
		}
		
		if ((r > 1) && (v[r - 1] == 0)) {
			q.push(r - 1);
			v[r - 1] = phase;
		}
		
		if (qCnt == 0) {
			qCnt = q.size();
			phase++;
		}
	}
	
	cout << v[1] - 1 << '\n';
	
	delete v;
	
	return 0;	
}
