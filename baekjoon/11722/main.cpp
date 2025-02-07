#include <iostream>
#include <climits>
using namespace std;

#define MAX 1000

int main() {
  int n;
  cin >> n;

  int a[MAX];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int lds = -INT_MAX;
  int ds[MAX];
  for (int i = 0; i < n; i++) {
    ds[i] = 1;
    for (int j = 0; j < i; j++) {
      if (a[j] > a[i]) {
        ds[i] = max(ds[i], ds[j] + 1);
      }
    }
    lds = max(lds, ds[i]);
  }

  cout << lds << '\n';
  return 0;
}
