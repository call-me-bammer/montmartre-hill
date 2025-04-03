#include <iostream>
using namespace std;

#define ull unsigned long long

int main() {
  ull p1, q1, p2, q2;
  cin >> p1 >> q1 >> p2 >> q2;

  // area = 1/2 * p1/q1 * p2/q2
  // resolve q1, q2, 1/2
  if ((p1 * p2) % (q1 * q2 * 2) == 0) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
