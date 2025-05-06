#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
  string s;
  cin >> s;

  int x = 0;
  string answer = "";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'X') {
      x++;
      continue;
    }

    // s[i] == '.'
    while (x >= 2) {
      string t = "BB";
      if (x >= 4) {
        t = "AAAA";
      }
      answer += t;
      x -= t.size();
    }

    answer += ".";
    x = 0;
  }

  while (x >= 2) {
    string t = "BB";
    if (x >= 4) {
      t = "AAAA";
    }
    answer += t;
    x -= t.size();
  }

  if (s.size() != answer.size()) {
    cout << -1 << endl;
    return 0;
  }

  cout << answer << endl;
  return 0;
}
