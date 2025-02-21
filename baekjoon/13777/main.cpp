#include <iostream>
using namespace std;

int main() {
  
  while (true) {
    int n;
    cin >> n;
    if (!n) break;

    int st = 1;
    int en = 50;

    while (st <= en) {
      int mid = (st + en) / 2;
      cout << mid << ' ';
      if (mid < n) {
        st = mid + 1;
      } else if (mid > n) {
        en = mid - 1;
      } else {
        break;
      }
    }
    cout << '\n';
  }

  return 0;
}
