#include <iostream>
#include <string>
using namespace std;

void print(bool isAcceptable, string s) {
  if (isAcceptable) {
    cout << '<' << s << "> is acceptable." << endl;
  } else {
    cout << '<' << s << "> is not acceptable." << endl;
  }
}

int main() {
  string s;
  while (cin >> s) {
    if (s == "end") {
      break;
    }

    bool isAcceptable = false;
    for (int i = 0; i < s.length(); i++) {
      string t = "aeiou";
      for (int j = 0; j < t.length(); j++) {
        if (s[i] == t[j]) {
          isAcceptable = true;
          break;
        }
      }
    }

    if (!isAcceptable) {
      print(isAcceptable, s);
      continue;
    }

    isAcceptable = true;
    for (int i = 0; i + 2 < s.length(); i++) {
      int vowelCount = 0;
      string t = "aeiou";
      for (int j = i; j < i + 3; j++) {
        for (int k = 0; k < t.length(); k++) {
          if (s[j] == t[k]) {
            vowelCount++;
            break;
          }
        }
      }
      if (vowelCount == 0 || vowelCount == 3) {
        isAcceptable = false;
        break;
      }
    }

    if (!isAcceptable) {
      print(isAcceptable, s);
      continue;
    }

    isAcceptable = true;
    for (int i = 0; i + 1 < s.length(); i++) {
      if (s[i] != s[i + 1]) {
        continue;
      }

      string t = s.substr(i, 2);
      if (t != "ee" && t != "oo") {
        isAcceptable = false;
        break;
      }
    }

    print(isAcceptable, s);
  }

  return 0;
}
