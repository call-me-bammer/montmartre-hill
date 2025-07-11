#include <iostream>
#include <vector>
using namespace std;

// 1*1+0, 2*2+1, 3*3+5, ..., n*n+f(n-1)
int main() {
  int n;
  vector<int> v(2, 1);
  for (int i = 2; i <= 100; i++) {
    v.push_back(v[i-1] + i * i);
  }
  while (cin >> n) {
    if (n == 0) break;
    cout << v[n] << endl;
  }
  return 0;
}
