#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int count = 0;
  // 20 10
  // 22
  while (n >= 1) {
    count += n;
    n = n / m;
  }

  cout << count << endl;
  return 0;
}
