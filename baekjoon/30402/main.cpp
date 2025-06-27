#include <iostream>
using namespace std;

int main() {
  string catName = "chunbae";
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      char c;
      cin >> c;
      if (c == 'b') {
        catName = "nabi";
      } else if (c == 'g') {
        catName = "yeongcheol";
      }
    }
  }

  cout << catName << endl;
  return 0;
}
