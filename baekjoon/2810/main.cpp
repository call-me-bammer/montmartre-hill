#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int usableCupHolder = 0;
  bool hasCoupleSeat = false;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'L') {
      hasCoupleSeat = true;
      i++;
    }
    usableCupHolder++;
  }

  if (hasCoupleSeat) {
    usableCupHolder++;
  }

  cout << usableCupHolder << endl;
  return 0;
}
