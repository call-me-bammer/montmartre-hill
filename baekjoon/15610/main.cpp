#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double a;
  cin >> a;

  cout << fixed << setprecision(8) << 4 * sqrt(a) << endl;
  return 0;
}
