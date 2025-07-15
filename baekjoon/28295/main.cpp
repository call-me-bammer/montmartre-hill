#include <iostream>
#include <map>
using namespace std;

map<int, char> m = {{0, 'N'}, {1, 'E'}, {2, 'S'}, {3, 'W'}};

int main() {
  int d = 0;
  for (int i = 0; i < 10; i++) {
    int t = 0;
    cin >> t;

    if (t == 1) {
      d += 1;
    } else if (t == 2) {
      d += 2;
    } else if (t == 3) {
      d += -1;
    }

    if (d > 3) {
      d -= 4;
    } else if (d < 0) {
      d = 3;
    }
  }

  cout << m[d] << endl;
  return 0;
}
