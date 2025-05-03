#include <iostream>
using namespace std;

int main() {
  int m[101][101] = {0};

  for (int i = 0; i < 4; i++) {
    int lx, ly, rx, ry;
    cin >> lx >> ly >> rx >> ry;

    for (int x = lx; x < rx; x++) {
      for (int y = ly; y < ry; y++) {
        m[x][y]++;
      }
    }
  }

  int area = 0;
  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      if (m[i][j] != 0) {
        area++;
      }
    }
  }

  cout << area << endl;
  return 0;
}
