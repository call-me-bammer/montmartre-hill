#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  // 1 + 4 = 5
  // 3 + 7 = 10
  // 5 + 10 = 15
  // 7 + 13 = 20

  int r = 5, c = 4;
  for (int i = 1; i < n; i++) {
    c += 3;
    r = (r + c) % 45678;
  }

  cout << r << endl;
  return 0;
}
