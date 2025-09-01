#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  unsigned long long arr[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  int z = n / 2;
  while (z >= 1) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n / 2; j++) {
        arr[i][j] += arr[i][j + z];
      }
    }

    for (int i = 0; i < n / 2; i++) {
      for (int j = 0; j < n / 2; j++) {
        arr[i][j] += arr[i + z][j];
      }
    }

    z /= 2;
  }

  cout << arr[0][0] << endl;
  return 0;
}
