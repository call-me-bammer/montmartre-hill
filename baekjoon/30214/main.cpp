#include <iostream>
using namespace std;

int main() {
  int s1, s2;
  cin >> s1 >> s2;

  if (s1 * 2 >= s2) {
    cout << 'E' << endl;
  } else {
    cout << 'H' << endl;
  }

  return 0;
}
