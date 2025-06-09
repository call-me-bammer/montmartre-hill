#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;
  int n;
  while (cin >> n) {
    if (n == -1) {
      break;
    }

    if (n != 0) {
      v.push_back(n);
      continue;
    }

    int cnt = 0;
    for (int i = 0; i < v.size(); i++) {
      for (int j = 0; j < v.size(); j++) {
        if (v[i] == 2 * v[j]) {
          cnt++;
        }
      }
    }

    cout << cnt << endl;
    v.clear();
  }

  return 0;
}
