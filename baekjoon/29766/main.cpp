#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  int c = 0;
  for (int i = 0; i < s.length() - 3; i++) {
    if (s.substr(i, 4) == "DKSH") {
      c++;
      i += 3;
    }
  }

  cout << c << endl;
  return 0;
}
