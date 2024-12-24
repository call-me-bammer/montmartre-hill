#include <iostream>
#include <string>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;
  string s;
  cin >> n >> s >> k;

  int r = 0;
  int u = 0;
  int ru = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'R') {
      r++;
    } else if (s[i] == 'U') {
      u++;
    } else if (s[i] == 'X') {
      ru++;
    }
  }

  int count = 0;

  for (int i = 0; i < k; i++) {
    int x, y;
    cin >> x >> y;

    x -= 1;
    y -= 1;

    if (r >= x && u >= y) {
      count++;
      continue;
    }

    int t = min(min(x, y), ru);
    x -= t;
    y -= t;

    if (r >= x && u >= y) {
      count++;
    }
  }

  cout << count << '\n';
  return 0;
}
