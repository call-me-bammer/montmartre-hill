#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void backtrack(vector<int> v, vector<int> &r);

int n, m;
set<vector<int>> s;

int main() {
  cin >> n >> m;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  vector<int> r;
  backtrack(v, r);

  for (auto i : s) {
    for (auto j : i) {
      cout << j << ' ';
    }
    cout << '\n';
  }

  return 0;
}

void backtrack(vector<int> v, vector<int> &r) {
  if (r.size() == m) {
    s.insert(r);
    return;
  }

  for (int i = 0; i < n; i++) {
    if (r.empty() || r.back() <= v[i]) {
      r.push_back(v[i]);
      backtrack(v, r);
      r.pop_back();
    }
  }
}
