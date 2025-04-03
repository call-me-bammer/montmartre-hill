#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    string a, b;
    cin >> a >> b;
    if (a == b) {
      cout << "OK\n";
    } else {
      cout << "ERROR\n";
    }
  }
  return 0;
}
