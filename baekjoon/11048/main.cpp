#include <iostream>
using namespace std;

int a[1001][1001];
int dp[1001][1001];

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      dp[i][j] = a[i][j] + max(
        dp[i - 1][j],
        max(dp[i][j - 1], dp[i - 1][j - 1])
      );
    }
  }

  cout << dp[n][m] << endl;
  return 0;
}
