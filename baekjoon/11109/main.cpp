#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int d, n, s, p;
    cin >> d >> n >> s >> p;

    if (d + n * p < n * s) {
      cout << "parallelize" << endl;
    } else if (d + n * p > n * s) {
      cout << "do not parallelize" << endl;
    } else {
      cout << "does not matter" << endl;
    }
  }
  return 0;
}
