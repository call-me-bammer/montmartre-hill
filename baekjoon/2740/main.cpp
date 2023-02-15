#include <iostream>
using namespace std;

int a[100][100];
int b[100][100];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m, k;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  cin >> m >> k;
  
  for(int i = 0; i < m; i++) {
    for (int j = 0; j < k; j++) {
      cin >> b[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      int e = 0;
      for (int z = 0; z < m; z++) {
        e += a[i][z] * b[z][j];
      }
      cout << e << ' ';
    }
    cout << '\n';
  }

  return 0;
}
