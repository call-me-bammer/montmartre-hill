#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  int res1 = floor((a / b) * c);
  int res2 = floor((a * b) / c);

  cout << max(res1, res2) << endl;
  return 0;
}
