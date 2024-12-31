#include <cmath>
#include <iostream>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c, d, n;
  cin >> a >> b >> c >> d;

  cin >> n;

  int count = 0;
  for (int i = 0; i < n; i++) {
    int u, v;
    cin >> u >> v;

    int y = max(a * (int)pow((v - b), 2) + c, d);
    if (y == u) {
      count++;
    }
  }

  cout << count << '\n';
  return 0;
}
