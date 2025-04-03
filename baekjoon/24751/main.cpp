#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int a;
  cin >> a;
  cout << fixed << setprecision(8)
       << 1 + (float)(100-a)/a << '\n'
       << 1 + (float)a/(100-a) << '\n';
  return 0;
}
