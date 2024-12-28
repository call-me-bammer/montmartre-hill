#include <iostream>
using namespace std;

int main() {
  int sab, ma, fab, mb;
  cin >> sab >> ma >> fab >> mb;

  if (sab <= 4 * 60 || sab <= ma + fab + mb) {
    cout << "high speed rail\n";
  } else {
    cout << "flight\n";
  }

  return 0;
}
