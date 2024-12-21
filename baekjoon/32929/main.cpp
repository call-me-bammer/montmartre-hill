#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;

  // 1 2 3 4 5 6
  // 1 2 0 1 2 0
  // U O S U O S

  if (x % 3 == 1) {
    cout << "U";
  } else if (x % 3 == 2) {
    cout << "O";
  } else {
    cout << "S";
  }

  cout << '\n';
  return 0;
}