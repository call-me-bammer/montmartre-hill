#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  map<string, string> qa;
  for (int i = 0; i < n; i++) {
    string q, a;
    cin >> q >> a;
    qa[q] = a;
  }

  for (int i = 0; i < m; i++) {
    string s;
    cin >> s;
    string ans = "";
    for (int j = 0; j < s.size(); j++) {
      for (int k = j; k < s.size(); k++) {
        string sub = s.substr(j, k - j + 1);
        //cout << "sub: " << sub << '\n';
        if (qa.find(sub) != qa.end()) {
          ans += qa[sub];
          //cout << "qa[sub]: " << qa[sub] << '\n';
        }
      }
    }
    if (ans == "") {
      cout << -1 << '\n';
      continue;
    }
    cout << ans << '\n';
  }

  return 0;
}
