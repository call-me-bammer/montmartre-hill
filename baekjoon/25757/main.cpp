#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

int main() {
  int n;
  char game;
  cin >> n >> game;

  map<char, int> m = {{'Y', 2}, {'F', 3}, {'O', 4}};

  set<string> names;
  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;
    names.insert(name);
  }

  cout << names.size() / (m[game] - 1) << endl;
  return 0;
}
