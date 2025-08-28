#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n * 5; i++) {
    if (i >= n * 2 && i < n * 3 || i >= n * 4 && i < n * 5) {
      for (int j = 0; j < n * 5; j++) {
        cout << "@";
      }
      cout << endl;
    } else {
      for (int j = 0; j < n * 5; j++) {
        if (j >= n && j < n * 4) {
          cout << " ";
        } else {
          cout << "@";
        }
      }
      cout << endl;
    }
  }

  return 0;
}
