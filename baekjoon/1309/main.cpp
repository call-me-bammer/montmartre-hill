#include <iostream>
#include <algorithm>
#include <cstring>
#include <cassert>
#include <vector>
using namespace std;

int cage[2][100001];

int main() {
  int n;
  cin >> n;

  // test. n = 4, (cage[2][4])
  int out = 0;
  
  for (int i = 1; i <= n; i++) {
    int tmp = 0;

    vector<int> t, v;
    for (int j = 0; j < i; j++)
      t.push_back(1);
    for (int j = 0; j < n * 2 - i; j++)
      t.push_back(0);

    sort(t.begin(), t.end());

    assert(t.size() == n * 2);
    
    do {
      memset(cage, 0, sizeof(cage));
      bool flag = true;
      for (int j = 0; j < 2; j++) {
        for (int z = 0; z < n; z++) {
          if (cage[j][z] != 0)
            flag = false;
        }
      }
      assert(flag == true);

      for (int j = 0; j < n * 2; j++) {
        if (t[j] == 1) {
          if (n > j) cage[0][j] = 1;
          else cage[1][j - n] = 1;
        }
      }

      /*
      // print.
      for (int j = 0; j < 2; j++) {
        for (int z = 0; z < n; z++) {
          cout << cage[j][z] << ' ';
        }
        cout << '\n';
      }
      cout << '\n';
      */

      // count.
      int count = 0;
      for (int j = 0; j < 2; j++) {
        for (int z = 0; z < n; z++) {
          if (cage[j][z] == 0)
            continue;

          if (cage[1 - j][z] == 1)
            continue;

          if ((z-1 >= 0) && (cage[j][z-1] == 1))
            continue;

          if ((z+1 < n) && (cage[j][z+1] == 1))
            continue;

          count++;
        }
      }

      if (count == i) {
        tmp++;
      }

    } while (next_permutation(t.begin(), t.end()));  

    out += tmp;
    cout << "n(" << i << ") : " << tmp << '\n';
  }

  cout << out + 1 << '\n';
  return 0;
}
