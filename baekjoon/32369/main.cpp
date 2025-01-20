#include <iostream>
using namespace std;

int main() {
  int ga = 1, gb = 1;
  int n, a, b;
  cin >> n >> a >> b;

  for (int i = 1; i <= n; i++) {
    ga += a;
    gb += b;

    if (ga < gb) {
      int tmp = ga;
      ga = gb;
      gb = tmp;
    }

    if (ga == gb) {
      gb -= 1;
    }
  }

  cout << ga << ' ' << gb << endl;
  return 0;
}
