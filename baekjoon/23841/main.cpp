#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    string t = s;
    reverse(t.begin(), t.end());

    for (int j = 0; j < m; j++) {
      if (s[j] != '.') {
        cout << s[j];
      } else if (t[j] != '.') {
        cout << t[j];
      } else {
        cout << '.';
      }
    }
    cout << endl;
  }

  return 0;
}
