#include <iostream>
using namespace std;

int main() {
  int a, b, c, d, p;
  cin >> a >> b >> c >> d >> p;

  int x = a * p;
  int y = b + d * max(p - c, 0);

  cout << min(x, y) << endl;
  return 0;
}
