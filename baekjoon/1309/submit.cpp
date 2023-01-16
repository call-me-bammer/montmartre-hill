#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int out = 3;
  int before = 1;

  for (int i = 1; i < n; i++) {
    int tmp = out;
    out = (out * 2 + before) % 9901;
    before = tmp;
  }

  cout << out << '\n';
  return 0;
}
