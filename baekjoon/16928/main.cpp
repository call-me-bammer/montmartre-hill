#include <iostream>
#include <queue>
#include <map>
using namespace std;

int* g;
int* v;
int* p;

map<int, int> l, s;

void bfs(queue<int> q);

int main() {

	int n, m;
	cin >> n >> m;
	
	int a, b;

	g = new int[101]();
	v = new int[101]();
	p = new int[101]();
	
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		l[a] = b;
		g[a] = 1;
	}
	
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		s[a] = b;
		g[a] = 2;
	}
	
	queue<int> q;
	q.push(1);
	
	bfs(q);
	
	cout << p[100] << '\n';	
	
	delete g;
	delete v;
	delete p;
	
	return 0;
}

void bfs(queue<int> q) {
	
	v[1] = 1;
	p[1] = 0;
	
	while (!q.empty()) {
		
		int r = q.front();
		q.pop();
		
		for (int i = 6; i > 0; i--) {
			if (r + i > 100)
				continue;
			
			if (v[r + i] == 0) {
				
				v[r + i] = 1;	
				p[r + i] = (p[r + i] == 0 ? p[r] + 1
										  : min(p[r + i], p[r] + 1));
				
				if (g[r + i] == 1) {
					q.push(l[r + i]);
					p[l[r + i]] = (p[l[r + i]] == 0 ? p[r + i]
													: min(p[l[r + i]], p[r + i]));
				}
				
				else if (g[r + i] == 2) {
					q.push(s[r + i]);
					p[s[r + i]] = (p[s[r + i]] == 0 ? p[r + i]
													: min(p[s[r + i]], p[r + i]));
				}
				
				else {
					q.push(r + i);
				}
			}
		}
	}
}
