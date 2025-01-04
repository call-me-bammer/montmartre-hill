#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int k;
    cin >> k;

    string s = "";
    while (k > 0) {
      k -= 1;
      s += (char)('A' + k % 26);
      k /= 26;
    }

    reverse(s.begin(), s.end());
    cout << s << '\n';
  }

  return 0;
}
