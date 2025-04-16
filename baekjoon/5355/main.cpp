#include <iostream>
#include <iomanip>
#include <cstring>
#include <sstream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  cin.ignore();
  for (int i = 0; i < t; i++) {
    string s;
    getline(cin, s);
    istringstream iss(s);

    string token;
    iss >> token;
    double n = stod(token);
    double r = n;

    while (iss >> token) {
      char c = token[0];
      if (c == '@') {
        r *= 3;
      } else if (c == '%') {
        r += 5;
      } else if (c == '#') {
        r -= 7;
      }
    }

    cout << fixed << setprecision(2)
         << r << endl;
  }

  return 0;
}
