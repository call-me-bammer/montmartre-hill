#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, k;
    cin >> n >> k;

    int kids = 0;
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      kids += x / k;
    }

    cout << kids << endl;
  }

  return 0;
}
