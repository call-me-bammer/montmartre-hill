#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    vector<int> v(n + 1);
    for (int j = 1; j <= n; j++) {
      cin >> v[j];
    }

    int min_count = 0;
    int idx = 1;
    bool isValid = true;
    while (isValid) {
      if (idx == n) {
        break;
      }
      idx = v[idx];
      min_count++;

      if (min_count == n) {
        isValid = false;
        break;
      } 
    }

    cout << (isValid ? min_count : 0) << '\n';
  }

  return 0;
}
