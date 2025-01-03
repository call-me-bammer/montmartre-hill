#include <iostream>
using namespace std;

int main() {
  int s, f;
  cin >> s >> f;

  cout << (f < s ? "flight" : "high speed rail") << '\n';
  return 0;
}
