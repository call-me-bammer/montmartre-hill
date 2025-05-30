#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;

  int b = 1;
  while (b <= n) {
    b *= 2;
  }
  b /= 2;

  string s;
  while (b > 0) {
    if (n >= b) {
      s += '1';
      n -= b;
    } else {
      s += '0';
    }
    b /= 2;
  }

  int o = 0;
  for (int i = 0; i < s.size(); i++) {
    o += pow(2, i) * (s[i] - '0');
  }

  cout << o << endl;
  return 0;
}
