#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n * 5; i++) {
    int j = i / n;
    if (j % 2 == 0) {
      for (int z = 0; z < n * 5; z++) {
        cout << "@";
      }
    } else {
      for (int z = 0; z < n; z++) {
        cout << "@";
      }
    }
    cout << endl;
  }

  return 0;
}
