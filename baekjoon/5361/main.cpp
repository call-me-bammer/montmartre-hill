#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

vector<double> v = {350.34, 230.90, 190.55, 125.30, 180.90};

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    double sum = 0.0;
    for (int j = 0; j < 5; j++) {
      int x;
      cin >> x;
      sum += v[j] * x;
    }
    cout << fixed << setprecision(2)
         << '$' << sum << endl;
  }
  return 0;
}
