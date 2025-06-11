#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;

  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  sort(h.begin(), h.end());

  for (int i = 0; i < n; i++) {
    if (l >= h[i]) {
      l++;
      continue;
    }
    break;
  }

  cout << l << endl;
  return 0;
}
