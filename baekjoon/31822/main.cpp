#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b;
  int n;
  cin >> a >> n;
  int c = 0;
  for (int i = 0; i < n; i++) {
    cin >> b;
    if (a.substr(0, 5) == b.substr(0, 5)) {
      c++;
    }
  }

  cout << c << endl;
  return 0;
}
