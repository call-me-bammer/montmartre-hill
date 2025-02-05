#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> v(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }

  vector<int> r(n + 1);
  vector<int> init = {0, v[1], v[1] + v[2]};
  copy(init.begin(), init.end(), r.begin());

  for (int k = 3; k <= n; k++) {
    r[k] = max(r[k - 1], max(r[k - 2] + v[k], r[k - 3] + v[k -1] + v[k]));
  }
  
  cout << r[n] << '\n';
  return 0;
}
