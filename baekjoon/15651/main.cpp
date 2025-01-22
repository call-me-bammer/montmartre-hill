#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int> &r, int n, int m);

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> r;
  backtrack(r, n, m);

  return 0;
}

void backtrack(vector<int> &r, int n, int m) {
  if (r.size() == m) {
    for (auto x : r) {
      cout << x << ' ';
    }
    cout << '\n';
    return;
  }

  for (int i = 1; i <= n; i++) {
    r.push_back(i);
    backtrack(r, n, m);
    r.pop_back();
  }
}
