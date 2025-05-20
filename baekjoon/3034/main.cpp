#include <iostream>
using namespace std;

int main() {
  int n, w, h;
  cin >> n >> w >> h;

  int r = w * w + h * h;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    if (x * x > r) {
      cout << "NE" << endl;
    } else {
      cout << "DA" << endl;
    }
  }

  return 0;
}
