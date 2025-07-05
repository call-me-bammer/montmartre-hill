#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;

  string a, b;
  for (int i = 0; i < t; i++) {
    cin >> a >> b;

    int d = 0;
    for (int j = 0; j < a.size(); j++) {
      if (a[j] != b[j]) {
        d++;
      }
    }
    cout << "Hamming distance is " << d << "." << endl;
  }

  return 0;
}
