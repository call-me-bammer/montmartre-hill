#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool isPalindrome = true;
  for (int i = 0; i < s.length() / 2; i++) {
    if (s[i] != s[s.length() - 1 - i]) {
      isPalindrome = false;
      break;
    }
  }

  if (isPalindrome) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  return 0;
}
