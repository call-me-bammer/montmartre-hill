#include <iostream>
using namespace std;

int main() {
  int a, p, c;
  cin >> a >> p >> c;

  cout << max(p, a + c) << endl;
  return 0;
}
