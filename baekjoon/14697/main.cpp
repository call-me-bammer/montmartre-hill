#include <iostream>
using namespace std;

int main() {
  int a, b, c, n;
  cin >> a >> b >> c >> n;

  bool found = false;
  for (int i = 0; a*i <= n; i++) {
    for (int j = 0; a*i + b*j <= n; j++) {
      for (int k = 0; a*i + b*j + c*k <= n; k++) {
        if (a*i + b*j + c*k == n) {
          found = true;
          break;
        }
      }
    }
  }

  cout << (found ? 1 : 0) << endl;
  return 0;
}
