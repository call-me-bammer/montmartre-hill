#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int> &v, int n, int m);

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> v;
  backtrack(v, n, m);  

  return 0;
}

void backtrack(vector<int> &v, int n, int m) {
  if (v.size() == m) {
    for (int i = 0; i < v.size(); i++) {
      cout << v[i] << ' ';
    }
    cout << '\n';
    return;
  }

  for (int i = 1; i <= n; i++) {
    if (v.empty() || v.back() <= i) {
      v.push_back(i);
      backtrack(v, n, m);
      v.pop_back();
    }
  }
}
