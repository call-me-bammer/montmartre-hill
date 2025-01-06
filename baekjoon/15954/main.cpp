#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int a[500];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  double minSd = INT_MAX;

  for (int i = k; i <= n; i++) {
    for (int j = 0; j <= n - i; j++) {
      int sum = 0;
      for (int z = j; z < j + i; z++) {
        sum += a[z];
      }
      double m = sum / (double)i;

      double temp = 0;
      for (int z = j; z < j + i; z++) {
        temp += pow(a[z] - m, 2);
      }
      double v = temp / i;
      double sd = sqrt(v);
      if (minSd > sd) {
        minSd = sd;
      }
    }
  }

  cout << fixed << setprecision(11) << minSd << '\n';
  return 0;
}
