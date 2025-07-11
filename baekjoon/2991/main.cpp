#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  vector<int> v(3);
  cin >> v[0] >> v[1] >> v[2];

  vector<int> r;

  for (int i = 0; i < 3; i++) {
    int count = 0;

    int t = v[i] - 1;
    t %= (a + b);
    if (t < a) count++;

    t = v[i] - 1;
    t %= (c + d);
    if (t < c) count++;

    r.push_back(count);
  }

  for (auto x : r) {
    cout << x << '\n';
  }

  return 0;
}
