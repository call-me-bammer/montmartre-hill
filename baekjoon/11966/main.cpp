#include <iostream>
#include <set>
using namespace std;

int main() {
  int n;
  cin >> n;

  set<int> s;
  int x = 1;
  for (int i = 0; i <= 30; i++) {
    s.insert(x);
    x *= 2;
  }

  bool isTwoSqrt = false;
  if (s.find(n) != s.end()) {
    isTwoSqrt = true;
  }

  cout << (isTwoSqrt ? 1 : 0) << endl;
  return 0;
}
