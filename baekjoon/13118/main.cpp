#include <iostream>
#include <vector>
using namespace std;

#define MAX_P 4

int main() {
  vector<int> p(MAX_P);
  for (int i = 0; i < MAX_P; i++) {
    cin >> p[i];
  }
  
  int x, y, r;
  cin >> x >> y >> r;

  for (int i = 0; i < MAX_P; i++) {
    if (p[i] == x) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  
  cout << 0 << endl;
  return 0;
}
