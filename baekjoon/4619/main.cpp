#include <iostream>
#include <cmath>
using namespace std;

int main() {

  while (true) {
    int b, n;
    cin >> b >> n;
    if (b == 0 && n == 0) break;

    int difference = 1000000;
    int a = 1;
    int foundA = a;
    while (true) {
      if (difference > abs(b - pow(a, n))) {
        difference = abs(b - pow(a, n));
        foundA = a;
        a++;
      } else {
        break;
      }
    }

    cout << foundA << endl;
  }
  
  return 0;
}
