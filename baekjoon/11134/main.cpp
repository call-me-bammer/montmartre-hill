#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, c;
    cin >> n >> c;
    cout << (int)ceil(n / (double)c) << endl;
  }
  return 0;
}
