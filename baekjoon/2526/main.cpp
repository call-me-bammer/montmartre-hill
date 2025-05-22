#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, p;
  cin >> n >> p;

  vector<int> v;
  v.push_back(n);
  int x = n;
  int i;

  while (true) {
    x *= n;
    x %= p;

    bool found = false;
    for (i = 0; i < v.size(); i++) {
      if (x == v[i]) {
        found = true;
        break;
      }
    }
    if (found) {
      break;
    }

    v.push_back(x);
  }

  cout << v.size() - i << endl;
  return 0;
}
