#include <iostream>
using namespace std;

// east, south, west, north
int d[][2] = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};

int main() {
  int m, n;
  cin >> m >> n;

  int x = 0, y = 0;
  int current_dir = 0; // east
  bool isValid = true;

  for (int i = 0; i < n; i++) {
    string cmd;
    int option;
    cin >> cmd >> option;

    if (!isValid) {
      continue;
    }

    if (cmd == "MOVE") {
      x += d[current_dir][0] * option;
      y += d[current_dir][1] * option;
    } else { // cmd == "TURN"
      // 0: LEFT, 1: RIGHT
      current_dir += (2 * option - 1); 
    }

    if (current_dir < 0) {
      current_dir += 4;
    } else if (current_dir >= 4) {
      current_dir -= 4;
    }

    if (x < 0 || x > m || y < 0 || y > m) {
      isValid = false;
    }
  }

  if (!isValid) {
    cout << -1 << '\n';
    return 0;
  }

  cout << x << ' ' << y << '\n';
  return 0;
}
