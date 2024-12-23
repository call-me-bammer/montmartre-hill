#include <iostream>
#include <set>
using namespace std;

int main() {
  int t, x, n;
  cin >> t >> x >> n;

  bool isPossible = true;

  for (int i = 0; i < n; i++) {
    int k, a;
    cin >> k;
    set<int> s;
    for (int j = 0; j < k; j++) {
      cin >> a;
      s.insert(a);
    }

    if (s.find(x) == s.end()) {
      isPossible = false;
      break;
    }
  }

  cout << (isPossible ? "YES" : "NO") << endl;
  return 0;
}
