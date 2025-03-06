#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

#define MAX 10000

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    v.push_back({x, y});
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int z = 0; z < n; z++) {
        if (i == j || j == z || z == i) {
          continue;
        }

        int x1 = v[i].first;
        int y1 = v[i].second;
        int x2 = v[j].first;
        int y2 = v[j].second;
        int x3 = v[z].first;
        int y3 = v[z].second;

        set<int> sx = {x1, x2, x3};
        set<int> sy = {y1, y2, y3};

        if (sx.size() == 3 || sy.size() == 3)  {
          continue;
        }

        vector<int> v1(sx.begin(), sx.end());
        vector<int> v2(sy.begin(), sy.end());

        int b = abs(v1[0] - v1[1]);
        int h = abs(v2[0] - v2[1]);
        int areaTwoTimes = b * h;

        if (ans < areaTwoTimes) {
          ans = areaTwoTimes;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
