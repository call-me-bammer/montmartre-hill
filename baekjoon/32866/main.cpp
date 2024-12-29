#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float n, x;
  cin >> n >> x;

  float a = n * x / 100;
  //   float b = (n - a) * (y / 100);

  cout << fixed << setprecision(6) << n * x / (n - a) << '\n';
  return 0;
}
