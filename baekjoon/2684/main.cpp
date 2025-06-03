#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
  int p;
  cin >> p;

  for (int i = 0; i < p; i++) {
    string s;
    cin >> s;
  
    vector<int> v(8, 0);
    for (int j = 0; j < s.size() - 2; j++) {
      int c = 0;
      string t = s.substr(j, 3);
      reverse(t.begin(), t.end());
      for (int k = 0; k < 3; k++) {
        int p = 0;
        if (t[k] == 'H') {
          p = 1;
        }
        c += pow(2, k) * p;
      }
      v[c]++;
    }

    for (auto x : v) {
      cout << x << ' ';
    }
    cout << endl;
  }

  return 0;
}
