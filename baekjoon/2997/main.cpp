#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
  vector<int> v(3);
  cin >> v[0] >> v[1] >> v[2];

  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(abs(v[0] - v[1]));
  pq.push(abs(v[1] - v[2]));
  pq.push(abs(v[2] - v[0]));

  sort(v.begin(), v.end());

  int a = v[0];
  for (int i = 1; i < 3; i++) {
    if (a + pq.top() == v[i]) {
      a += pq.top();
      continue;
    }
    cout << a + pq.top() << endl;
    return 0;
  }

  cout << a + pq.top() << endl;
  return 0;
}
