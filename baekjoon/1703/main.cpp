#include <iostream>
using namespace std;

int main() {
  int a;
  
  while (cin >> a) {
    if (a == 0) {
      break;
    }

    int leaves = 1;
    int sp, cut;

    for (int i = 0; i < a; i++) {
      cin >> sp >> cut;
      leaves = leaves * sp - cut;
    }
    cout << leaves << endl;
  }

  return 0;
}
