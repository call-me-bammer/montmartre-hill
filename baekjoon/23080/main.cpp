#include <iostream>
#include <string>
using namespace std;

int main() {
  int k;
  cin >> k;

  string s, o;
  cin >> s;
  
  for (int i = 0; i < s.size(); i += k) {
    o += s[i];
  }

  cout << o << endl;
  return 0;
}
