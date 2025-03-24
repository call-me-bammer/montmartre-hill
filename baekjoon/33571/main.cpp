#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  map<char, int> m = {
    {'A', 1}, {'a', 1}, {'D', 1}, {'d', 1}, {'e', 1},
    {'g', 1}, {'O', 1}, {'o', 1}, {'P', 1}, {'p', 1},
    {'Q', 1}, {'q', 1}, {'R', 1}, {'B', 2}, {'b', 1},
    {'@', 1},
  };

  int holes = 0;
  for (int i = 0; i < s.size(); i++) {
    holes += m[s[i]];
  }

  cout << holes << '\n';
  return 0;
}
