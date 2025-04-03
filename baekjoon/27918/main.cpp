#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x = 0, y = 0;
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    if (c == 'D') {
      x++;
    } else {
      y++;
    }
    if (abs(x - y) == 2) {
      break;
    }
  }
  cout << x << ':' << y << endl;
  return 0;
}
