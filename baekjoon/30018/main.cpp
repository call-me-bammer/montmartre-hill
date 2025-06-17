#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int b, c = 0;
  for (int i = 0; i < n; i++) {
    cin >> b;
    c += max(0, b - a[i]);
  }

  cout << c << endl;
  return 0;
}
