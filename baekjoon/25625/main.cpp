#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  if (y < x) {
    cout << y + x << endl;
  } else {
    cout << y - x << endl;
  }

  return 0;
}
