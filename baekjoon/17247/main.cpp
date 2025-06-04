#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<pair<int, int>> p;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int x;
      cin >> x;
      if (x == 1) {
        p.push_back({i, j});
      }
    }
  }

  cout << abs(p[1].first - p[0].first) + abs(p[1].second - p[0].second) << endl;
  return 0;
}
