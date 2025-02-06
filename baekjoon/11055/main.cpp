#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000

int main() {
  int n;
  cin >> n;

  int a[MAX] = { 0 };
  int dp[MAX]; // sum, not LIS length
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    dp[i] = a[i];
  }

  int maxSum = a[0];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (a[j] < a[i]) {
        dp[i] = max(dp[i], dp[j] + a[i]);
      }
    }
    maxSum = max(maxSum, dp[i]);
  }

  cout << maxSum << '\n';
  return 0;
}
