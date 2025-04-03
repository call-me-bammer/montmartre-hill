#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  // calculate x * y
  int a = 100 - x;
  int b = 100 - y;

  int c = 100 - (a + b);
  int d = a * b;

  int q = d / 100;
  int r = d % 100;

  int front = c;
  int back = d;

  if (d >= 100) {
    front += q;
    back = r;
  }

  cout << a << ' ' << b << ' ' << c << ' '
       << d << ' ' << q << ' ' << r << '\n'
       << front << ' ' << back << '\n';
  return 0;
}
