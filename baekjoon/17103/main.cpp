#include <iostream>
using namespace std;

#define RANGE 1000001

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int t, n;
  cin >> t;

  // find primes
  int p[RANGE] = {1, 1, 0};
  
  for (int i = 2; i <= RANGE; i++) {
    if (p[i] == 0) {
      for (int j = i + i; j <= RANGE; j += i) {
        p[j] = 1;
      }
    }
  }

  // count partitions
  int partition_count;

  for (int i = 0; i < t; i++) {
    cin >> n;
    
    partition_count = 0;

    for (int j = 2; j <= n / 2; j++) {
      if (p[j] == 1)
        continue;

      if (p[n - j] == 0)
        partition_count++;
    }

    cout << partition_count << '\n';
  }

  return 0;
}
