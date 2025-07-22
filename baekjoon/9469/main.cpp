#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int p;
  cin >> p;
  for (int i = 0; i < p; i++) {
    int n;
    double d, a, b, f;
    cin >> n >> d >> a >> b >> f;

    // distance = velocity * time
    double fd = d / (a + b) * f;

    cout << n << ' ' << fixed << setprecision(6)
         << fd << endl;
  }
  return 0;
}
