#include <iostream>
using namespace std;

#define MAX 45

int main() {
  int n;
  cin >> n;

  int f[MAX + 1] = { 0 };
  f[0] = 1;
  f[1] = 1;

  for (int i = 2; i <= MAX; i++) {
    f[i] = f[i - 1] + f[i - 2];
  }

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cout << f[x] << '\n';
  }

  return 0;
}
