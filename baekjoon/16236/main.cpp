#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int n;
int t = 0; // total time
int s = 2; // shark size
int c = 0; // size count
int x, y; // shark position

bool status = true;

int d[][2] = { {-1, 0}, {0, -1}, {1, 0}, {0, 1} };

int m[20][20];

struct compare {
	bool operator()(pair<int, int> a, pair<int, int> b) {
		
		if (a.first != b.first)
			return a.first > b.first;
		else return a.second > b.second;
	}
};

void bfs();

// debug
template<typename T>
void print_queue(T q);

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> m[i][j];
		
			if (m[i][j] == 9) {
				y = i;
				x = j;
			}
		}
	}
	
	while (1) {
				
		bfs();
		
		// 탈출 후 bfs 내부의 pq가 없어버리면?
		if (!status)
			break;
	}
	
	cout << t << '\n';
	
	return 0;
}

void bfs() {
	
	queue<pair<int, int>> q;
	q.push(make_pair(y, x));
	
	int** visit = new int*[n];
	for (int i = 0; i < n; i++)
		visit[i] = new int[n]();
	
	// priority : dist > pos
	priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
	
	int phase = 1;
	int qCnt = q.size();
	
	while (!q.empty()) {
		pair<int, int> r = q.front();
		q.pop();
		qCnt--;
		
		visit[r.first][r.second] = 1;
	
		for (int i = 0; i < 4; i++) {
			int u = r.first + d[i][0];
			int v = r.second + d[i][1];
			
			if ((0 > u) || (u >= n))
				continue;
			
			if ((0 > v) || (v >= n))
				continue;
			
			// 0 or small fish
			if ((visit[u][v] == 0) && (m[u][v] <= s)) {
				q.push(make_pair(u, v));
				
				// push eatable fish
				if ((m[u][v] != 0) && (m[u][v] < s)) {
					pq.push(make_pair(phase, u * n + v));
				}
				
				visit[u][v] = 1;
			}
			
			// push eatable fish
			//if ((visit[u][v] == 0) && (m[u][v] != 0) && (m[u][v] < s)) {
			//	pq.push(make_pair(u * n + v, m[u][v]));
			//}
		}
		
		if (qCnt == 0) {
			//cout << "qCnt : " << q.size() << '\n';
			qCnt = q.size();
			phase++;
		}
	}
	
	cout << "==============\n";
	
	// debug
	print_queue(pq);
	
	// debug visit test
	/*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << visit[i][j] << ' ';
		cout << '\n';
	}
	*/
	
	// debug map test
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << m[i][j] << ' ';
		cout << '\n';
	}
	
	
	if (pq.empty()) {
		status = false;
		return;
	}
	
	pair<int, int> fish = pq.top();
	
	int fy = fish.second / n;
	int fx = fish.second % n;
	
	cout << "(" << fy << ", " << fx << ")\n";
	
	t += fish.first;
	
	cout << "t : " << t << '\n';
	
	c++;
	
	if (c == s) {
		s++;
		c = 0;
	}
	
	m[y][x] = 0;
	m[fy][fx] = 9;
	
	y = fy;
	x = fx;
	
	// free memory
	for (int i = 0; i < n; i++)
		delete visit[i];
	delete visit;	
}

// debug
template<typename T>
void print_queue(T q) {
	
	if (q.empty())
		cout << "Nothing!";
	
	while (!q.empty()) {
		cout << q.top().first << '-' << q.top().second << ' ';
		q.pop();
	}
	cout << '\n';
}
