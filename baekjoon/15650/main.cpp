#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int> &r, int n, int m);

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    vector<int> r;
    r.push_back(i);
    backtrack(r, n, m);
  }

  return 0;
}

void backtrack(vector<int> &r, int n, int m) {
  if (r.size() == m) {
    for (int i = 0; i < m; i++)
      cout << r[i] << ' ';
    cout << endl;
    return;
  }

  for (int i = 1; i <= n; i++) {
    if (r.back() < i) {
      r.push_back(i);
      backtrack(r, n, m);
      r.pop_back();
    }
  }
}
