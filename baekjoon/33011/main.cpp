#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    int odd = 0;
    for (int j = 0; j < n; j++) {
      int a;
      cin >> a;
      if (a % 2 == 1)
        odd++;
    }
    int even = n - odd;

    if (odd == even) {
      cout << "heeda0528\n";
      continue;
    }

    int m = max(odd, even);
    if (m % 2 == 1) {
      cout << "amsminn\n";
    } else {
      cout << "heeda0528\n";
    }
  }

  return 0;
}
