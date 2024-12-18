#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define MAXN 20

int main() {
  int n, s;
  cin >> n >> s;

  int a[MAXN] = {0};

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int cnt = 0;

  for (int j = 0; j < n; j++) {
    vector<int> v;
    for (int i = 0; i < n; i++) {
      if (i <= j) {
        v.push_back(1);
      } else {
        v.push_back(0);
      }
    }

    // sort vector
    sort(v.begin(), v.end());

    do {
      // TEST. print vector
      // for (int i = 0; i < n; i++) {
      //   cout << v[i] << ' ';
      // }
      // cout << '\n';

      int sum = 0;
      for (int i = 0; i < n; i++) {
        if (v[i] == 1) {
          sum += a[i];
        }
      }
      if (sum == s) {
        cnt++;
      }
    } while (next_permutation(v.begin(), v.end()));
  }

  cout << cnt << '\n';
  return 0;
}
