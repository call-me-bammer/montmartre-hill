#include <iostream>
#include <cstring>
using namespace std;

int main() {
  string s;
  cin >> s;
  int answer = s.size();
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == ':') {
      answer += 1;
    } else if (s[i] == '_') {
      answer += 5;
    }
  }
  cout << answer << endl;
  return 0;
}
