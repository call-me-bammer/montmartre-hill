#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  cout << s.substr(s.size() - 5) << endl;
  return 0;
}
