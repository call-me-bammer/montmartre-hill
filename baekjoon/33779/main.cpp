#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
  string s, p;
  cin >> s;

  p = s;
  reverse(p.begin(), p.end());
  
  if (s == p) {
    cout << "beep\n";
  } else {
    cout << "boop\n";
  }

  return 0;
}
