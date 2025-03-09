#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int min_query = 0;
  for (int i = 0; i < n / 2; i++) {
    // ex. a == ?, b == ?
    if ((s[i] != '?' && s[n-i-1] == '?') || (s[i] == '?' && s[n-i-1] != '?')) {
      min_query++;
      continue;
    }
    // ex. ? == ?
    if (s[i] == '?' && s[n-i-1] == '?') {
      min_query += 26;
      continue;
    }
    // ex. a != b
    if (s[i] != s[n-i-1]) {
      min_query = 0;
      break;
    }
    // ex. a == a
    /*
    if (s[i] != '?' && s[n-i-1] != '?' && s[i] == s[n-i-1]) {
      continue;
    }
    */
  }

  cout << min_query << endl;
  return 0;
}
