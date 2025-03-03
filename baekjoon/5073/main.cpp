#include <iostream>
#include <set>
using namespace std;

int main() {
  int a, b, c;
  while (cin >> a >> b >> c) {
    if (!a && !b && !c) break;

    int m = max(max(a, b), c);
    if (m >= a + b + c - m) {
      cout << "Invalid\n";
      continue;
    }

    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);

    if (s.size() == 1) {
      cout << "Equilateral\n";
    } else if (s.size() == 2) {
      cout << "Isosceles\n";
    } else {
      cout << "Scalene\n";
    }
  }

  return 0;
}
