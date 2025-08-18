#include <iostream>
#include <vector>
using namespace std;

vector<int> v = {512, 256, 128, 64, 32, 16, 8, 4, 2, 1};

int main() {
  int sa, sb;
  cin >> sa >> sb;

  int sc = 0;
  int a[10] = {0}, b[10] = {0};

  for (int i = 0; i < 10; i++) {
    if (sa < v[i]) {
      continue;
    }
    sa -= v[i];
    a[i] = 1;
  }

  for (int i = 0; i < 10; i++) {
    if (sb < v[i]) {
      continue;
    }
    sb -= v[i];
    b[i] = 1;
  }

  for (int i = 0; i < 10; i++) {
    if (a[i] + b[i] == 1) {
      sc += v[i];
    }
  }

  cout << sc << endl;
  return 0;
}
