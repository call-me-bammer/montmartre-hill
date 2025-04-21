#include <iostream>
using namespace std;

#define X 100

int main() {

  int s = 0;
  bool flag = false;

  for (int i = 0; i < 10; i++) {
    int a;
    cin >> a;

    if (!flag && (abs(s - X) >= abs(s + a - X))) {
      s += a;
    } else {
      flag = true;
    }
  }

  cout << s << endl;
  return 0;
}
