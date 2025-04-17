#include <iostream>
using namespace std;

typedef long long ll;

int main() {
  ll a, b;
  cin >> a >> b;

  if (a > b) {
    ll tmp = a;
    a = b;
    b = tmp;
  }

  ll ans = (b * (b + 1)) / 2 - (a * (a + 1)) / 2 + a;
  cout << ans << endl;
  return 0;
}
