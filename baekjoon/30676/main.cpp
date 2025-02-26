#include <iostream>
#include <cstring>
using namespace std;

#define RANGE 7

int spectrums[RANGE] = { 620, 590, 570, 495, 450, 425, 380 };
string colors[RANGE] = { "Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet" };

int main() {
  int l;
  cin >> l;

  for (int i = 0; i < RANGE; i++) {
    if (l >= spectrums[i]) {
      cout << colors[i] << '\n';
      break;
    }
  }

  return 0;
}
