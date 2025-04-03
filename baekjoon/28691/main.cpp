#include <iostream>
#include <map>
#include <cstring>
using namespace std;

map<char, string> m = {
  {'M', "MatKor"},
  {'W', "WiCys"},
  {'C', "CyKor"},
  {'A', "AlKor"},
  {'$', "$clear"},
};

int main() {
  char c;
  cin >> c;

  cout << m[c] << endl;
  return 0;
}
