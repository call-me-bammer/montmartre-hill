#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int n;
  cin >> n;

  string a = "";
  for (int i = 0; i < n; i++) {
    a += 'a';
  }

  cout << a << '\n';
  return 0;
}
