#include <iostream>
using namespace std;

int powerOfInt(int b, int p);

int main() {
  int a, b, m, d;
  cin >> a >> b >> m;

  int base_ten = 0;

  for (int i = 0; i < m; i++) {
    cin >> d;
    base_ten += powerOfInt(a, m - i - 1) * d;
  }

  int b_base_digit = 0;

  while (base_ten > powerOfInt(b, b_base_digit)) {
    b_base_digit++;
  }
  b_base_digit--;

  for (int i = b_base_digit; i >= 0; i--) {
    if (base_ten / powerOfInt(b, i) < b) {
      cout << base_ten / powerOfInt(b, i) << ' ';
    }
    base_ten %= powerOfInt(b, i);
  }
  cout << '\n';

  return 0;
}

int powerOfInt(int b, int p) {
  int out = 1;
  for (int i = 0; i < p; i++) {
    out *= b;
  }
  return out;
}
