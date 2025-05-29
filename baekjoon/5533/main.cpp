#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> v;
  for (int i = 0; i < n; i++) {
    vector<int> t(3);
    for (int j = 0; j < 3; j++) {
      cin >> t[j];
    }
    v.push_back(t);
  }

  vector<int> a(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      bool flag = false;
      for (int k = 0; k < n; k++) {
        if (i == k) continue;
        if (v[i][j] == v[k][j]) {
          flag = true;
        }
      }
      if (!flag) {
        a[i] += v[i][j];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }

  return 0;
}
