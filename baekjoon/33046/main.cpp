#include <iostream>
using namespace std;

int main() {
  int a, b;
  int p = 1;
  
  for (int j = 0; j < 2; j++) {
    cin >> a >> b;
    for (int i = 1; i < a + b; i++) {
      p++;
      if (p > 4) {
        p -= 4;
      }
    }
  }

  cout << p << '\n';
  return 0;
}
