#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  int m = max(a, (max(b, c)));

  int s = a + b + c;
  while (m >= s - m) {
    m--;
    s--;
  }

  cout << s << endl;
  return 0;
}
