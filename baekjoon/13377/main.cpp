#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  unordered_map<string, int> m;

  int i = 1;
  do {
    string tmp = "";
    for (auto x : v) {
      tmp += x + 'a';
    }
    m[tmp] = i;
    i++;
  } while (next_permutation(v.begin(), v.end()));

  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    cout << m[s] << '\n';
  }

  return 0;
}
