#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  while (a != b) {
    int a_t = max(a, b) - min(a, b);
    int b_t = min(a, b);
    a = a_t;
    b = b_t;
  }

  cout << b << endl;
  return 0;
}
