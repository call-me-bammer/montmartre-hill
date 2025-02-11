#include <iostream>
using namespace std;

// 1 2 3 4 (5)
// 5 6 7 8 (9)
// 9 10 11 12 (13)
// 13 14 15 16 (17) ...

int main() {
  int n;
  cin >> n;

  if (((n - 1) / 4) % 2 == 1) {
    cout << 6 - ((n - 1) % 4 + 1) << endl;
  } else {
    cout << (n - 1) % 4 + 1 << endl;
  }

  return 0;
}
