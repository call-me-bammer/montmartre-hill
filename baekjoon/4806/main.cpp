#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int c = 0;
  while (getline(cin, s)) {
    c++;
  }
  cout << c << endl;
  return 0;
}
