#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int t;
  cin >> t;

  vector<int> p(10001, 1);
  for (int i = 2; i <= 10000; i++) {
    if (p[i] == 0) continue;
    for (int j = i * 2; j <= 10000; j += i) {
      p[j] = 0;
    }
  }

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<tuple<int, int, int>> v;
    for (int i = 2; i <= n / 2; i++) {
      if (p[i] == 0) continue;
      if (p[n - i] == 0) continue;
      v.push_back(make_tuple(n - 2 * i, i, n - i));
    }
    sort(v.begin(), v.end());
    cout << get<1>(v[0]) << ' ' << get<2>(v[0]) << endl;
  }

  return 0;
}
