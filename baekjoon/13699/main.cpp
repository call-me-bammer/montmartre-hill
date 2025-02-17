#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long ull;

int main() {
  int n;
  cin >> n;

  vector<ull> t(n + 1, 0);
  t[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      t[i] += t[j] * t[i - (j + 1)];
    }
  }

  cout << t[n] << endl;
  return 0;
}
