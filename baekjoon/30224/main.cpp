#include <iostream>
#include <cstring>
using namespace std;

int main() {
  string n;
  cin >> n;

  int ans = 0;
  if (n.find('7') != string::npos) {
    ans += 2;
  }
  if (stoi(n) % 7 == 0) {
    ans += 1;
  }

  cout << ans << endl;
  return 0;
}
