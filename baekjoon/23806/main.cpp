#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n * 5; i++) {
    for (int j = 0; j < n * 5; j++) {
      if (i < n || i >= n * 4 || j < n || j >= n * 4) {
        cout << "@";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
