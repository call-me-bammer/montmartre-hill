#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, b, p, q, r;
  cin >> n;

  vector<tuple<int, int, int>> v;

  for (int i = 0; i < n; i++) {
    cin >> b >> p >> q >> r;
    v.push_back({b, p * q * r, p + q + r});
  }

  sort(v.begin(), v.end(), [](auto a, auto b) {
    if (get<1>(a) != get<1>(b))
      return get<1>(a) < get<1>(b);
    if (get<2>(a) != get<2>(b))
      return get<2>(a) < get<2>(b);
    return get<0>(a) < get<0>(b);
  });

  for (int i = 0; i < 3; i++) {
    cout << get<0>(v[i]) << ' ';
  }
  cout << '\n';
  return 0;
}
