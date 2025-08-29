#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n * 5; i++) {
    if ((i / n) % 2 == 0) {
      for (int j = 0; j < n * 5; j++) {
        cout << (j < n * 1 || j >= n * 4 ? "@" : " ");
      }
      cout << endl;
    } else {
      for (int j = 0; j < n * 5; j++) {
        cout << "@";
      }
      cout << endl;
    }
  }

  return 0;
}
