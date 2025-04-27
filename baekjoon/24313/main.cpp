#include <iostream>
using namespace std;

int main() {
  int a1, a0;
  cin >> a1 >> a0;

  int c, n0;
  cin >> c >> n0;

  if (a1 > c) {
    cout << 0 << endl;
    return 0;
  }

  if (a1 * n0 + a0 <= c * n0) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
