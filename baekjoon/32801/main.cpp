#include <iostream>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int fizzBuzz = 0;
  int fizz = 0;
  int buzz = 0;

  for (int i = 1; i <= n; i++) {
    if (i % a == 0 && i % b == 0) {
      fizzBuzz++;
    } else if (i % a == 0) {
      fizz++;
    } else if (i % b == 0) {
      buzz++;
    }
  }

  cout << fizz << " " << buzz << " " << fizzBuzz << endl;
  return 0;
}
