#include <iostream>
#include <queue>
using namespace std;

typedef long long ll;

template<typename T>
void print_pq(T q) {
	while (!q.empty()) {
		cout << q.top() << ' ';
		q.pop();
	}
	cout << '\n';
}

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	ll n, m;
	cin >> n >> m;
	
	ll v;
	ll sum = 0;
	
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	
	for (int i = 0; i < n; i++) {
		cin >> v;
		sum += v;
		
		pq.push(v);
	}
	
	ll a, b, c;
	
	for (int j = 0; j < m; j++) {
		
		a = pq.top();
		pq.pop();
		b = pq.top();
		pq.pop();
		
		c = a + b;
		
		pq.push(c);
		pq.push(c);
		
		sum += c;
	}
	
	// print_pq(pq);
	
	cout << sum << '\n';
	
	return 0;
}
