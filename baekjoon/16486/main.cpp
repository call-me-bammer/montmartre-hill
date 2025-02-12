#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3.141592

int main() {
  int d1, d2;
  cin >> d1 >> d2;

  cout << fixed << setprecision(6)
       << d1 * 2 + 2 * PI * d2 << endl;
  return 0;
}
