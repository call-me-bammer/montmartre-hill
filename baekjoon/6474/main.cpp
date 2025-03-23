#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int main() {
  map<char, char> mirror = {
    {'A', 'A'}, {'E', '3'}, {'H', 'H'}, {'I', 'I'}, {'J', 'L'},
    {'L', 'J'}, {'M', 'M'}, {'O', 'O'}, {'S', '2'}, {'T', 'T'},
    {'U', 'U'}, {'V', 'V'}, {'W', 'W'}, {'X', 'X'}, {'Y', 'Y'},
    {'Z', '5'}, {'1', '1'}, {'2', 'S'}, {'3', 'E'}, {'5', 'Z'},
    {'8', '8'}
  };

  int format_count = 0;
  string s;
  while (cin >> s) {
    if (format_count) cout << '\n';

    bool is_palindrome = true;
    bool is_mirrored = true;

    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
      if (mirror[s[i]] != s[n - 1 - i]) {
        is_mirrored = false;
      }
      
      if (s[i] == s[n - 1 - i]) {
        continue;
      }
      is_palindrome = false;
    }

    if (n % 2 == 1 && mirror[s[n / 2]] != s[n / 2]) {
      is_mirrored = false;
    }

    if (!is_palindrome && !is_mirrored) {
      cout << s << " -- is not a palindrome.\n";
    } else if (is_palindrome && is_mirrored) {
      cout << s << " -- is a mirrored palindrome.\n";
    } else if (is_palindrome) {
      cout << s << " -- is a palindrome.\n";
    } else {
      cout << s << " -- is a mirrored string.\n";
    }
    format_count++;
  }

  return 0;
}
