#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#include <cmath>
using namespace std;

map<int, char> m = {{0, 'a'}, {1, 'b'}, {2, 'c'}};

int main() {
  for (int j = 1; ; j++) {
    vector<int> v(3);
    char s = ' ';
    for (int i = 0; i < 3; i++) {
      cin >> v[i];
      if (v[i] == -1) {
        s = m[i];
      }
    }

    if (s == ' ') {
      break;
    }

    if (j != 1) {
      cout << endl;
    }

    double l = 0.0;

    // if c == -1
    if (v[2] == -1) {
      l = sqrt(pow(v[0], 2) + pow(v[1], 2));
    } else {
      l = sqrt(pow(v[2], 2) - pow(max(v[0], v[1]), 2));
    }

    cout << "Triangle #" << j << endl;

    // if l is nan, print "Impossible."
    if (isnan(l) || l <= 0) {
      cout << "Impossible." << endl;
    } else {
      cout << s << " = " << fixed << setprecision(3) << l << endl;
    }
  }

  return 0;
}
