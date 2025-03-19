#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int m, n;
    cin >> m >> n;

    vector<int> a(m);
    vector<int> b(n);
    set<int> intersection_set;
    set<int> union_set;
    for (int j = 0; j < m; j++) {
      cin >> a[j];
      union_set.insert(a[j]);
    }
    for (int j = 0; j < n; j++) {
      cin >> b[j];
      if (count(a.begin(), a.end(), b[j]) > 0) {
        intersection_set.insert(b[j]);
      }
      union_set.insert(b[j]);
    }

    cout << (intersection_set.size() / (float)union_set.size() > 0.5 ? 1 : 0) << '\n';
  }

  return 0;
}
