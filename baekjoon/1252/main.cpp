#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  if (a.size() > b.size()) {
    string tmp = a;
    a = b;
    b = tmp;
  }

  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  string c = "";
  int carry = 0;
  for (int i = 0; i < b.size(); i++) {
    int x;
    if (i < a.size()) {
      x = (a[i]-'0') + (b[i]-'0') + carry;
    } else {
      x = (b[i]-'0') + carry;
    }

    c += x % 2 + '0';

    if (x >= 2) {
      carry = 1;
    } else {
      carry = 0;
    }
  }

  if (carry == 1) {
    c += '1';
  }

  reverse(c.begin(), c.end());

  if (c != "0") {
    int pos = c.find('1');
    if (pos != string::npos) {
      c = c.substr(pos);
    } else {
      c = "0";
    }
  }

  cout << c << endl;
  return 0;
}
