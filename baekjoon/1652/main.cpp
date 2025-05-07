#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> v;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }

  int r = 0, c = 0;
  for (int i = 0; i < n; i++) {
    int p = 0;
    for (int j = 0; j < n; j++) {
      if (v[i][j] == '.') {
        p++;
        continue;
      }
      if (p >= 2) {
        r++;
      }
      p = 0;
    }
    if (p >= 2) {
      r++;
    }
  }

  for (int i = 0; i < n; i++) {
    int p = 0;
    for (int j = 0; j < n; j++) {
      if (v[j][i] == '.') {
        p++;
        continue;
      }
      if (p >= 2) {
        c++;
      }
      p = 0;
    }
    if (p >= 2) {
      c++;
    }
  }

  cout << r << ' ' << c << endl;
  return 0;
}
