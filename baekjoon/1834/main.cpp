#include <iostream>
using namespace std;

typedef unsigned long long ull;

int main() {
  int n;
  cin >> n;

  ull s = 0;
  for (ull i = 1; i < n; i++) {
    s += i + n * i;
  }

  cout << s << endl;
  return 0;
}
