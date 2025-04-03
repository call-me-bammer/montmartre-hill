#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  int x = abs(a[0] - b[0]);
  int y = abs(a[1] - b[1]);

  // 0 <= x <= y
  if (x > y) {
    int tmp = x;
    x = y;
    y = tmp;
  }

  cout << x << ' ' << y << endl;
  return 0;
}
