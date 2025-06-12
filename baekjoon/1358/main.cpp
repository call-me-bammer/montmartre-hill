#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int w, h, x, y, p;
  cin >> w >> h >> x >> y >> p;

  int c = 0;
  for (int i = 0; i < p; i++) {
    int a, b;
    cin >> a >> b;

    bool isInside = false;

    if (a >= x && a <= x + w && b >= y && b <= y + h) {
      isInside = true;
    }

    if (pow(abs(a - x), 2) + pow(abs(b - y - h / 2), 2) <= pow(h / 2, 2)) {
      isInside = true;
    }

    if (pow(abs(a - x - w), 2) + pow(abs(b - y - h / 2), 2) <= pow(h / 2, 2)) {
      isInside = true;
    }

    if (isInside) {
      c++;
    }
  }
  
  cout << c << endl;
  return 0;
}
