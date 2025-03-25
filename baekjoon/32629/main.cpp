#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    /*
    int a = 1;
    while (a * a <= n) {
      a++;
    }
    a--;
    cout << "sqrt: " <<  << '\n';
    */
    int a = floor(sqrt(n));
    int b = a;
    if (a * b < n)
      b++;
    if (a * b < n)
      a++;

    cout << 2 * a + 2 * b << '\n';
  }

  return 0;
}
