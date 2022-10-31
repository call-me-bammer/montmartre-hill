#include <iostream>
#include <cmath>
using namespace std;

int euclidean_gcd(int a, int b);

int main() {
  int n, s;
  cin >> n >> s;

  int a, b;
  cin >> a;

  int out = abs(s - a);

  for (int i = 1; i < n; i++) {
    cin >> b;
    out = min(out, euclidean_gcd(abs(s - a), abs(s - b)));

    a = b;
  }

  cout << out << '\n';

  return 0;
}

// gcd(a, b) = gcd(b, r)
int euclidean_gcd(int a, int b) {

  int r;

  while (a % b != 0) {
    r = a % b;
    
    a = b;
    b = r;
  }

  return b;
}
