#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int nx, ny;
  float w;

  while (cin >> nx >> ny >> w) {
    if (nx == 0 && ny == 0 && w == 0.0) {
      break;
    }

    bool isClear = true;
    float x = 0.0; // up to 75
    float y = 0.0; // up to 100

    vector<float> xi(nx), yi(ny);
    for (int i = 0; i < nx; i++) {
      cin >> xi[i];
    }
    for (int i = 0; i < ny; i++) {
      cin >> yi[i];
    }
    sort(xi.begin(), xi.end());
    sort(yi.begin(), yi.end());

    for (int i = 0; i < nx; i++) {
      if (x < xi[i] - w / 2) {
        isClear = false;
      }
      x = xi[i] + w / 2;
    }
    if (x < 75) {
      isClear = false;
    }
    for (int i = 0; i < ny; i++) {
      if (y < yi[i] - w / 2) {
        isClear = false;
      }
      y = yi[i] + w / 2;
    }
    if (y < 100) {
      isClear = false;
    }

    cout << (isClear ? "YES" : "NO") << '\n';
  }

  return 0;
}
