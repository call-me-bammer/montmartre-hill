#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, i;
  cin >> n >> i;

  vector<string> v(n);
  for (int j = 0; j < n; j++) {
    cin >> v[j];
  }

  sort(v.begin(), v.end());
  
  cout << v[i - 1] << endl;
  return 0;
}
