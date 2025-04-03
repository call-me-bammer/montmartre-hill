#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  double v = 0;
  for (int i = 0; i < n; i++) {
    double l;
    cin >> l;
    v += l * l * l;
  }

  cout << fixed << setprecision(6)
       << cbrt(v) << '\n';
  return 0;
}
