#include <iostream>
#include <list>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  list<int> a;
  for (int i = 1; i <= n; i++) {
    a.push_back(i);
  }

  for (int l = 0; l < m; l++) {
    int i, j, k;
    cin >> i >> j >> k;

    if (i == k) {
      continue;
    }

    auto ii = a.begin();
    advance(ii, i - 1);

    auto kk = a.begin();
    advance(kk, k - 1);

    auto jj = a.begin();
    advance(jj, j);

    a.splice(ii, a, kk, jj);
  }

  for (int x : a) {
    cout << x << ' ';
  }
  cout << endl;
  return 0;
}
