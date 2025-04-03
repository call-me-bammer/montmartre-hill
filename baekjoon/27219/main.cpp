#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n) {
    if (n >= 5) {
      cout << 'V';
      n -= 5;
      continue;
    }
    cout << 'I';
    n -= 1;
  }
  cout << '\n';
  return 0;
}
