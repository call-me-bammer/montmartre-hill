#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int h = b + b + 1;
  if (a < b + 1) {
    h -= (b + 1 - a) * 2;
  }
  
  cout << h << endl;
  return 0;
}
