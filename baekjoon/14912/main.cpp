#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;

  int f = 0;
  for (int i = 1; i <= n; i++) {
    string s = to_string(i);
    for (int j = 0; j < s.size(); j++) {
      if (s[j] == '0' + d) {
        f++;
      }
    }
  }

  cout << f << endl;
  return 0;
}
