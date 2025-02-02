#include <iostream>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  int** a = new int*[n + 1];
  int** s = new int*[n + 1];
  for (int i = 0; i <= n; i++) {
    a[i] = new int[n + 1]();
    s[i] = new int[n + 1]();
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
      // row sum
      s[i][j] = s[i][j - 1] + a[i][j];
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      // column sum
      s[i][j] += s[i - 1][j];
    }
  }

  for (int i = 0; i < m; i++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1] << '\n';
  }

  for (int i = 0; i <= n; i++) {
    delete[] a[i];
    delete[] s[i];
  }
  delete[] a;
  delete[] s;
  
  return 0;
}
