#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  double m = (b - a) / (double)400;

  cout << 1 / (1 + pow(10, m)) << endl;
  return 0;
}
