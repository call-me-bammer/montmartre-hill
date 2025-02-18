#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int minA = v[0];
  int maxDiff = 0;
  cout << maxDiff << ' ';

  for (int i = 1; i < n; i++) {
    maxDiff = max(maxDiff, v[i] - minA);
    minA = min(minA, v[i]);
    cout << maxDiff << ' ';
  }

  cout << '\n';
  return 0;
}
