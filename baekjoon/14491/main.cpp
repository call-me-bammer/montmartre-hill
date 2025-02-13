#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  int a = 1;
  while (t >= a) {
    a *= 9;
  }
  a /= 9;

  while (a != 0) {
    cout << t / a;
    t %= a;
    a /= 9;
  }
  cout << '\n';

  return 0;
}
