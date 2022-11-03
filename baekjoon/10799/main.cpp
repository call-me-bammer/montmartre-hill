#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  char c = s[0];

  int layer = 0;
  int pieces = 0;
  int end_bars = 0;

  for (int i = 1; i < s.size(); i++) {
    // s[1]

    // laser case
    if ((c == '(') && (s[i] == ')')) {
      pieces += layer + end_bars;
      end_bars = 0;
    }

    // bar start
    else if (((c == '(') && (s[i] == '(')))
      ++layer;

    // bar end
    else if ((c == ')') && (s[i] == ')')) {
      layer--;
      end_bars++;
    }

    c = s[i];
  }

  pieces += end_bars;

  cout << pieces << '\n';

  return 0;
}
