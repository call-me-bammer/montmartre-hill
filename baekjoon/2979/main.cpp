#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int parkingLot[101] = {0};
  for (int i = 0; i < 3; i++) {
    int s, e;
    cin >> s >> e;
    for (int j = s; j < e; j++) {
      parkingLot[j]++;
    }
  }

  int charge = 0;
  for (int i = 1; i <= 100; i++) {
    if (parkingLot[i] == 1) {
      charge += a;
    } else if (parkingLot[i] == 2) {
      charge += b * 2;
    } else if (parkingLot[i] == 3) {
      charge += c * 3;
    }
  }

  cout << charge << endl;
  return 0;
}
