#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  if (s[s.size() - 1] == 'G') {
    cout << s.substr(0, s.size() - 1) << endl;
  } else {
    cout << s + 'G' << endl;
  }

  return 0;
}
