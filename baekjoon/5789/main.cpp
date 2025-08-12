#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    int a = s.size() / 2 - 1;
    cout << "Do-it";
    if (s[a] != s[a + 1]) {
      cout << "-Not";
    }
    cout << endl;
  }

  return 0;
}
