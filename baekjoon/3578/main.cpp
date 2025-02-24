#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int holes;
  cin >> holes;

  if (holes < 2) {
    cout << 1 - holes << endl;
    return 0;
  }
  
  string n = "";
  while (holes) {
    if (holes % 2 == 1) {
      n += "4";
      holes -= 1;
      continue;
    }

    n += "8";
    holes -= 2;
  }

  cout << n << endl;
  return 0;
}
