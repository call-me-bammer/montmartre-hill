#include <iostream>
#include <climits>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    int m = INT_MAX, M = INT_MIN;
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      m = min(m, x);
      M = max(M, x);
    }
    cout << m << ' ' << M << '\n';
  }

  return 0;
}
