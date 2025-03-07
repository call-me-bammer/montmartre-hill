#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  list<int> l;
  for (int i = 1; i <= n; i++) {
    int k;
    cin >> k;

    auto it = next(l.begin(), k - 1);
    l.insert(it, i);
  }

  l = list<int>(l.begin(), next(l.begin(), m));

  list<int> ll;
  for (auto ir = l.rbegin(); ir != l.rend(); ir++) {
    int k;
    cin >> k;

    auto it = next(ll.begin(), k - 1);
    ll.insert(it, *ir);
  }
  
  auto it = ll.begin();
  for (int i = 0; i < 3; i++, it++) {
    cout << *it << endl;
  }

  return 0;
}
