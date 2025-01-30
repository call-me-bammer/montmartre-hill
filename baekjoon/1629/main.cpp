#include <iostream>
using namespace std;

typedef long long ll;

ll _pow(int a, int b, int c);

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  cout << _pow(a, b, c) << '\n';
  return 0;
}

ll _pow(int a, int b, int c) {
  ll ret = 1;
  ll base = a %= c;
  while (b) {
    if (b & 1) {
      ret = ret * base % c;
    }
    b >>= 1;
    base = base * base % c;
  }
  return ret;
}
