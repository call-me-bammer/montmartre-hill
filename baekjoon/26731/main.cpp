#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> a(26, 0);
  for (int i = 0; i < s.size(); i++) {
    a[s[i] - 'A']++;
  }
  cout << (char)('A' + (find(a.begin(), a.end(), 0) - a.begin())) << endl;
  return 0;
}
