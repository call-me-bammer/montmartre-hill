#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  istringstream iss(s);
  string n;
  int c = 0;
  while (iss >> n) {
    int num = stoi(n);
    if (num > 0) c++;
  }

  cout << c << endl;
  return 0;
}
