#include <iostream>
using namespace std;

#define ull unsigned long long

int main() {
  ull m, n;
  cin >> m >> n;
  if (m <= 2 || n <= 2) {
    cout << m * n << endl;
    return 0;
  }

  cout << m * n - (m-2) * (n-2) << endl;
  return 0;
}
