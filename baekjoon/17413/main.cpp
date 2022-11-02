#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isLowerOrNumber(char c);
void yield(string& out, string& word);

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  string s, out, rword;
  bool flag = true;

  getline(cin, s);
  
  for (int i = 0; i < s.size(); i++)
  {
    
    if (s[i] == '<') {
      // if rword.size() > 0, then yield
      if (rword.size() > 0) {
        yield(out, rword);
        rword.clear();
      }

      out += s[i];
      flag = false;
      continue;
    }

    if (!flag) {
      out += s[i];
      if (s[i] == '>')
        flag = true;
    } else {
      if (!isLowerOrNumber(s[i])) {
        // if meet a space, then yield
        yield(out, rword);
        rword.clear();

        out += s[i]; // never append '<' (only ' ')
        continue;
      }
      rword += s[i];
    }
  }

  if (rword.size() > 0)
    yield(out, rword);

  cout << out << '\n';

  return 0;
}

bool isLowerOrNumber(char c) {
  if ((int(c) >= '0') && (int(c) <= '9'))
    return true;
  else if ((int(c) >= 'a') && (int(c) <= 'z'))
    return true;
  else
    return false;
}

void yield(string& out, string& word) {
  reverse(word.begin(), word.end());
  out += word;
}
