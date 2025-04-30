#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b;
  getline(cin, a);
  getline(cin, b);

  int count = 0;
  int i = 0;
  while (i < a.size()) {
    int pos = a.substr(i).find(b);
    if (pos != string::npos) {
      count++;
      i += pos + b.size() - 1;
    }
    i++;
  }

  cout << count << endl;
  return 0;
}
