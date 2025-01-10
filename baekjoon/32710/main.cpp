#include <iostream>
#include <set>
using namespace std;

int main() {
  int n;
  cin >> n;

  set<int> s;
  for (int a = 2; a <= 9; a++) {
    for (int b = 1; b <= 9; b++) {
      s.insert(a);
      s.insert(b);
      s.insert(a * b);
    }
  }

  cout << (s.find(n) != s.end() ? 1 : 0) << endl;
  return 0;
}
