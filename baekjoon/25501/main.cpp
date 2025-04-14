#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    bool isPalindrome = true;
    int count = 1;

    string r, s;
    cin >> r;
    s = r;
    reverse(r.begin(), r.end());
    
    if (r != s) {
      isPalindrome = false;
      int p = 0, q = s.size() - 1;
      while (p < q) {
        if (s[p] != s[q]) {
          break;
        }
        count++;
        p++;
        q--;
      }
    } else {
      count = ceil((s.size() + 1) / (float)2);
    }

    cout << (isPalindrome ? 1 : 0) << ' ' << count << '\n';
  }

  return 0;
}
