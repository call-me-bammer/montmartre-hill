#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  vector<int> v;
  for (int i = -1000; i <= 1000; i++) {
    if (i * i + 2 * a * i + b == 0) {
      v.push_back(i);
    }
  }

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
  cout << endl;

  return 0;
}
