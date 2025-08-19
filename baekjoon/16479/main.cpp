#include <iostream>
using namespace std;

int main() {
  int k, d1, d2;
  cin >> k >> d1 >> d2;

  double d = (d1 - d2) / 2.0;

  cout << (k * k - d * d) << endl;
  return 0;
}
