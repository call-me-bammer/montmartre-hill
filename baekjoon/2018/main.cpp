#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int count = 0;
  for (int i = 1; i <= n; i++) {
    int s = 0;
    for (int j = i; j <= n; j++) {
      s += j;
      if (s == n) {
        count++;
        break;
      }
      if (s > n) {
        break;
      }
    }
  }

  cout << count << endl;
  return 0;
}
