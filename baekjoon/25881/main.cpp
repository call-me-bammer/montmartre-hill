#include <iostream>
using namespace std;

int main() {
  int r1, r2;
  cin >> r1 >> r2;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;

    int charge = 0;
    if (p < 1001) {
      charge += p * r1;
    } else {
      charge += 1000 * r1 + (p - 1000) * r2;
    }

    cout << p << ' ' << charge << '\n';
  }

  return 0;
}
