#include <iostream>
#include <string>
#include <sstream>
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
    int sum = 0;
    while (iss >> token) {
      sum += stoi(token);
    }
    cout << sum << endl;
  }

  return 0;
}
