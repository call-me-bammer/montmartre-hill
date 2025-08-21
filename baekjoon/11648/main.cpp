#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s = to_string(n);
  int d = 0;

  while (s.length() > 1) {
    int p = 1;
    for (int i = 0; i < s.length(); i++) {
      p *= (s[i] - '0');
    }
    s = to_string(p);
    d++;
  }

  cout << d << endl;
  return 0;
}
