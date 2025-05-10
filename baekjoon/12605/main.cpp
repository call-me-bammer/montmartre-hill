#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
  int n;
  cin >> n;

  cin.ignore();
  for (int i = 1; i <= n; i++) {
    string l;
    getline(cin, l);

    vector<string> v;
    istringstream iss(l);
    string s;
    while (iss >> s) {
      v.push_back(s);
    }

    cout << "Case #" << i << ": ";
    for (auto it = v.rbegin(); it != v.rend(); it++) {
      cout << *it;
      if (it + 1 != v.rend()) {
        cout << ' ';
      }
    }
    cout << endl;
  }

  return 0;
}
