#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, e;
    cin >> n >> e;
    list<int> line;
    for (int j = 1; j <= n; j++) {
      line.push_back(j);
    }
    for (int j = 0; j < e; j++) {
      int a;
      cin >> a;
      list<int>::iterator it = find(line.begin(), line.end(), a);
      line.erase(it);
      line.push_front(a);
    }
    cout << line.back() << '\n';
  }
  return 0;
}
