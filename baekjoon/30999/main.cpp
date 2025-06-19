#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int a = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int c = 0;
    for (int j = 0; j < m; j++) {
      if (s[j] == 'O') {
        c++;
      }
    }
    if (c > s.size() / 2) {
      a++;
    }
  }

  cout << a << endl;
  return 0;
}
