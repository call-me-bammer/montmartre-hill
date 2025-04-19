#include <iostream>
#include <list>
using namespace std;

int main() {
  int n;
  cin >> n;

  list<int> l;
  for (int i = 1; i <= n; i++) {
    int p;
    cin >> p;

    auto it = l.end();
    advance(it, -p);
    l.insert(it, i);
  }
  
  for (int x : l) {
    cout << x << ' ';
  }
  cout << endl;
  return 0;
}
