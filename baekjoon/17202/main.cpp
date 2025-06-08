#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  vector<int> v;
  for (int i = 0; i < a.size(); i++) {
    v.push_back(a[i] - '0');
    v.push_back(b[i] - '0');
  }

  while (v.size() > 2) {
    vector<int> t;
    for (int i = 0; i < v.size() - 1; i++) {
      t.push_back((v[i] + v[i + 1]) % 10);
    }
    v = t;
  }

  cout << v[0] << v[1] << endl;
  return 0;
}
