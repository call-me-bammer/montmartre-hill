#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  int s = 0;
  vector<int> v(302, 0);
  for (int i = 1; i <= 301; i++) {
    s += i;
    v[i] = s;
  }

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    int w = 0;
    for (int k = 1; k <= n; k++) {
      w += k * v[k + 1];
    }

    cout << w << endl;
  }

  return 0;
}
