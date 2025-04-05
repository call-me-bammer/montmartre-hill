#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    if (n == 0) break;
    string s = "*";
    for (int i = 0; i < n; i++) {
      cout << s << '\n';
      s += '*';
    }
  }
  return 0;
}
