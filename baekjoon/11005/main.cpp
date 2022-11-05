#include <iostream>
using namespace std;

typedef long long ll;

ll powerOfInt(int b, int p);

int main() {
  ll n;
  int b;
  cin >> n >> b;

  ll p = 0;
  while (n >= powerOfInt(b, p))
    p++;
  p--;

  while (p >= 0) {
    ll c = n / powerOfInt(b, p);
    n = n % powerOfInt(b, p);
    p--;

    if (c >= 10)
      cout << (char)('A' + c - 10);
    else
      cout << c;
  }
  cout << '\n';

  return 0;
}

ll powerOfInt(int b, int p) {
  ll out = 1;
  for (int i = 0; i < p; i++) {
    out *= b;
  }
  return out;
}
