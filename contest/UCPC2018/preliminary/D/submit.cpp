#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int oddHeight = 0;
int phase = 0;

int* visit;

void bfs(vector<int>* v, queue<int> q);

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	vector<int> v[n+1];
	visit = new int[n + 1]();
	
	int a, b;
	
	for (int i = 0; i < n - 1; i++) {
		cin >> a >> b;
		
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	// do bfs from root 1
	queue<int> q;
	q.push(1);
	
	bfs(v, q);

	if (oddHeight % 2 == 1) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
	
	// free memory
	delete visit;
	
	return 0;
}

void bfs(vector<int>* v, queue<int> q) {
	
	int r;
	int isLeaf;
	
	int qCnt = q.size();
	
	while (!q.empty()) {
	
		r = q.front();
		q.pop();
		qCnt--;
		
		visit[r] = 1;
		
		// if there's no non-visit node from r,
		// r is leaf
		
		isLeaf = 1;
		for (auto i : v[r]) {
			if (visit[i] == 0) {
				isLeaf = 0; // non leaf, have child
				q.push(i);
			}
		}
		
		if ((isLeaf == 1) && (phase % 2 == 1)) {
			oddHeight++;
		}
		
		if (qCnt == 0) {
			qCnt = q.size();
			phase++;
		}
	}
}
