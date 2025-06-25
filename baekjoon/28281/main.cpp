#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int min_value = 2000000000;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] * x + a[i + 1] * x < min_value) {
      min_value = a[i] * x + a[i + 1] * x;
    }
  }

  cout << min_value << endl;
  return 0;
}
