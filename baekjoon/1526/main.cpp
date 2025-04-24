#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> v;
  int a = 4;
  while (a < 1000000) {
    string s = to_string(a);
    bool check = true;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '4' || s[i] == '7') {
        continue;
      }
      check = false;
    }
    if (check) {
      v.push_back(a);
    }
    a++;
  }

  int i = 0;
  for (; i < v.size(); i++) {
    if (v[i] > n) {
      break;
    }
  }

  cout << v[i - 1] << endl;
  return 0;
}
