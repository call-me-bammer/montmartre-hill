#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int p, t;
    cin >> p >> t;
    cout << p - t/7 + t/4 << '\n';
  }

  return 0;
}
