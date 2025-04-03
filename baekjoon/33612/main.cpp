#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int y = 2024;
  int m = 8;

  for (int i = 1; i < n; i++) {
    m += 7;
    if (m > 12) {
      m -= 12;
      y++;
    }
  }

  cout << y << ' ' << m << endl;
  return 0;
}
