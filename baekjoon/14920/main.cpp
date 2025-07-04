#include <iostream>
using namespace std;

int main() {
  int c;
  cin >> c;

  int n = 1;
  while (c != 1) {
    if (c % 2 == 0) {
      c /= 2;
    } else {
      c = 3 * c + 1;
    }
    n++;
  }

  cout << n << endl;
  return 0;
}
