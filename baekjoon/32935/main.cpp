#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  // pq is a min heap
  priority_queue<ll, vector<ll>, greater<ll>> pq;

  ll s = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    pq.push(a);
    s += a;
  }

  while (pq.top() < -s) {
    ll top = pq.top();
    ll _s = -s;
    pq.pop();
    pq.push(-s);
    s += -top + _s;
  }

  cout << s << '\n';
  return 0;
}
