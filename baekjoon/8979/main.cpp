#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<vector<int>> v;
  for (int i = 1; i <= n; i++) {
    int p, a, b, c;
    cin >> p >> a >> b >> c;

    vector<int> t = {p, a, b, c};
    v.push_back(t);
  }

  sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {
    if (a[1] != b[1]) {
      return a[1] > b[1];
    }
    if (a[2] != b[2]) {
      return a[2] > b[2];
    }
    if (a[3] != b[3]) {
      return a[3] > b[3];
    }
    return false;
  });

  int place = 1;
  int a = v[0][1];
  int b = v[0][2];
  int c = v[0][3];
  for (int i = 0; i < v.size(); i++) {
    if (v[i][1] != a || v[i][2] != b || v[i][3] != c) {
      place = i + 1;
      a = v[i][1];
      b = v[i][2];
      c = v[i][3];
    }
    if (v[i][0] == k) {
      break;
    }
  }

  cout << place << endl;
  return 0;
}
