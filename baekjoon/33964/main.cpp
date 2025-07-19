#include <iostream>
#include <string>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  string repunit = "";
  repunit += string(abs(x - y), '1');
  repunit += string(min(x, y), '2');

  cout << repunit << endl;
  return 0;
}
