#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  deque<int> q;
  for (int i = 1; i <= n; i++) {
    q.push_back(i);
  }

  vector<int> v;
  while (q.size() > 1) {
    v.push_back(q.front());
    q.pop_front();
    int x = q.front();
    q.pop_front();
    q.push_back(x);
  }
  v.push_back(q.front());

  for (auto i : v) {
    cout << i << ' ';
  }
  cout << endl;
  return 0;
}
