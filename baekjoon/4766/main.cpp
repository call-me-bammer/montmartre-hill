#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float a, b;
  cin >> a;
  while (cin >> b) {
    if (b == 999) {
      break;
    }
    cout << fixed << setprecision(2) << b - a << endl;
    a = b;
  }
  return 0;
}
