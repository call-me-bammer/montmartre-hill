#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  set<string> s;
  for (int i = 0; i < n; i++) {
    string l;
    cin >> l;
    s.insert(l);
  }

  int cnt = 0;
  for (int i = 0; i < m; i++) {
    string l;
    cin >> l;
    if (s.find(l) != s.end()) {
      cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}
