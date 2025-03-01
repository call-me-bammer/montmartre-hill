#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  if (b.size() > a.size()) {
    string t = a;
    a = b;
    b = t;
  }

  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  string r = "";
  int c = 0;
  for (int i = 0; i < a.size(); i++) {
    if (i < b.size()) {
      int x = a[i] - '0' + b[i] - '0' + c;
      r += to_string(x % 10);
      c = x / 10;
      continue;
    }

    int x = a[i] - '0' + c;
    r += to_string(x % 10);
    c = x / 10;
  }
  
  if (c > 0) {
    r += to_string(c);
  }

  reverse(r.begin(), r.end());
  cout << r << endl;
  return 0;
}
