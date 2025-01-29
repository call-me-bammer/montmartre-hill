#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void backtrack(vector<int> v, vector<bool> &isVisit, vector<int> &r);

int n, m;
set<vector<int>> s;

int main() {
  cin >> n >> m;

  vector<int> v(n);
  vector<bool> vs(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    vs[i] = false;
  }
  sort(v.begin(), v.end());

  vector<int> r;
  backtrack(v, vs, r);

  for (auto i : s) {
    for (auto j : i) {
      cout << j << ' ';
    }
    cout << '\n';
  }

  return 0;
}

void backtrack(vector<int> v, vector<bool> &isVisit, vector<int> &r) {
  if (r.size() == m) {
    s.insert(r);
    return;
  }

  for (int i = 0; i < n; i++) {
    if (!isVisit[i] && (r.empty() || r.back() <= v[i])) {
      r.push_back(v[i]);
      isVisit[i] = true;

      backtrack(v, isVisit, r);

      r.pop_back();
      isVisit[i] = false;
    }
  }
}
