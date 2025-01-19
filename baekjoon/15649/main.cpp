#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> v(n);
  for (int i = 1; i <= n; i++) {
    v[i - 1] = i;
  }

  vector<int> p;
  do {
    vector<int> t;
    for (int i = 0; i < m; i++) {
      t.push_back(v[i]);
    }
    if (p != t) {
      for (int i = 0; i < m; i++) {
        cout << t[i] << ' ';
      }
      cout << '\n';
      p = t;
    }
  } while (next_permutation(v.begin(), v.end()));

  return 0;
}
