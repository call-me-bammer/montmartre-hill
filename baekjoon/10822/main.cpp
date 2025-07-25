#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  // split s with comma
  size_t pos = 0;
  int sum = 0;
  while ((pos = s.find(',')) != string::npos) {
    sum += stoi(s.substr(0, pos));
    s = s.substr(pos + 1);
  }
  
  sum += stoi(s);
  cout << sum << endl;
  return 0;
}
