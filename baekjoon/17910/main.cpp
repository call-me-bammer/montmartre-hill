#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef unsigned long long ull;

// ull gcd(ull a, ull b);

int main() {
  int n;
  cin >> n;

  vector<ull> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[n - i - 1];
  }

  // a/b
  ull a = v[0];
  ull b = 1;

  for (int i = 1; i < n; i++) {
    // b/a + v[i]
    // (b + a * v[i])/a
    ull t = a;
    a = b + t * v[i];
    b = t;
  }

  // reduced fraction (a > b)
  // ull g = gcd(a, b);

  cout << a << '/' << b << '\n';
  return 0;
}

/*
ull gcd(ull a, ull b) {
  ull x = a;
  ull y = b;

  while (a != b) {
    if (a > b) a -= b;
    else b -= a;
  }

  return a;
}
*/
