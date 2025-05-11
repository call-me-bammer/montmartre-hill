#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  vector<int> v;
  int ta = 1, p = 2;
  while (ta <= 1000) {
    v.push_back(ta);
    ta += p;
    p++;
  }

  for (int i = 0; i < t; i++) {
    int k;
    cin >> k;

    bool flag = false;
    for (int a = 0; a < v.size(); a++) {
      for (int b = 0; b < v.size(); b++) {
        for (int c = 0; c < v.size(); c++) {
          if (v[a] + v[b] + v[c] == k) {
            flag = true;
            break;
          }
        }
        if (flag) {
          break;
        }
      }
      if (flag) {
        break;
      }
    }

    cout << (flag ? 1 : 0) << endl;
  }

  return 0;
}
