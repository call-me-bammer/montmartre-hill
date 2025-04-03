#include <iostream>
using namespace std;

#define ull unsigned long long

int main() {
  // a : white piece
  // b : black piece
  ull a, b;
  cin >> a >> b;

  if (a < b) {
    cout << a + 1 << endl;
  } else { // a >= b
    cout << b << endl;
  }

  return 0;
}
