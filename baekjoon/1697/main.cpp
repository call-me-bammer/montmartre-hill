#include <iostream>
#include <queue>
using namespace std;

int n, k;
int phase = 0;

int v[100001] = {0};

int d[2] = { -1, 1 };

void bfs(queue<int> q);

int main() {
	
	cin >> n >> k;
	
	v[n] = 1;
	queue<int> q;
	
	q.push(n);
	
	bfs(q);
	
	cout << phase << '\n';
	
	return 0;
}

void bfs(queue<int> q) {

	int qCnt = q.size();
	
	while (!q.empty()) {
		
		int r = q.front();
		q.pop();
		qCnt--;
		
		v[r] = 1;
		
		if (v[k] == 1)
			break;
		
		for (int i = 0; i < 2; i++) {
			int s = r + d[i];
			
			if ((s >= 0) && (s <= 100000) && (v[s] == 0))
				q.push(s);
		}
		
		if ((2 * r <= 100000) && (v[2 * r] == 0))
			q.push(2 * r);
		
		if (qCnt == 0) {
			qCnt = q.size();
			phase++;
		}
	}
}
