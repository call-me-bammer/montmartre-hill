#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> v;
    for (int j = 0; j < m; j++) {
      vector<int> r;
      for (int k = 0; k < n; k++) {
        int x;
        cin >> x;
        r.push_back(x);
      }
      v.push_back(r);
    }

    int d = 0;
    for (int j = 0; j < n; j++) {
      bool foundOne = false;
      int ones = 1;
      for (int k = 0; k < m; k++) {
        if (foundOne && v[k][j] == 0) {
          d += ones;
        } else if (foundOne && v[k][j] == 1) {
          ones++;
        }
        if (v[k][j] == 1) {
          foundOne = true;
        }
      }
    }

    cout << d << endl;
  }

  return 0;
}
