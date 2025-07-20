#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int profit = 0;
    for (int i = 1; i <= n; i++) {
      int a, b, c;
      cin >> a >> b >> c;

      profit += max(max(max(a, b), c), 0);
    }
    cout << profit << endl;
  }
  return 0;
}
