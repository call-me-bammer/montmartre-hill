#include <iostream>
#include <string>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int t, n, l;
  cin >> t;

  string s, out;

  for (int i = 0; i < t; i++) {
    cin >> n >> s >> l;

    out = s;
    int max_alcohol = l;
    
    for (int j = 1; j < n; j++) {
      cin >> s >> l;

      if (max_alcohol < l) {
        out = s;
        max_alcohol = l;
      }
    }
    
    cout << out << '\n';
  }

  return 0;
}
