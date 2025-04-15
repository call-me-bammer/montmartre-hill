#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long ull;

ull c = 0;

int main() {
  ull n;
  cin >> n;

  ull t = 1;
  for (int i = n - 2; i >= 1; i--) {
    c += i * t;
    t++;
  }

  cout << c << endl
       << 3 << endl;
  return 0;
}
