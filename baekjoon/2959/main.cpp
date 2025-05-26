#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> v;
  for (int i = 0; i < 4; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  cout << min(v[0], v[1]) * min(v[2], v[3]) << endl;
  return 0;
}
