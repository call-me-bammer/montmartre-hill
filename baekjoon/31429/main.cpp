#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> v = {{0, 0},
  {12, 1600}, {11, 894}, {11, 1327}, {10, 1311},
  {9, 1004}, {9, 1178}, {9, 1357}, {8, 837},
  {7, 1055}, {6, 556}, {6, 773}};

int main() {
  int n;
  cin >> n;
  cout << v[n].first << ' ' << v[n].second << endl;
  return 0;
}
