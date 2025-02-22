#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    int n, m;
    cin >> n >> m;
    if (!n && !m) {
      break;
    }
  
    vector<int> a;
    for (int i = 0; i < n; i++) {
      int c;
      cin >> c;
      a.push_back(c);
    }
  
    vector<int> b;
    for (int i = 0; i < m; i++) {
      int c;
      cin >> c;
      b.push_back(c);
    }
  
    int cnt = 0;
    for (int i = 0; i < m; i++) {
      int st = 0;
      int en = n - 1;
      while (st <= en) {
        int mid = (st + en) / 2;
        if (a[mid] < b[i]) {
          st = mid + 1;
        } else if (a[mid] > b[i]) {
          en = mid - 1;
        } else {
          cnt++;
          break;
        }
      }
    }
  
    cout << cnt << '\n';
  }

  return 0;
}
