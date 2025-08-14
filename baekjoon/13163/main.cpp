#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
   int n;
   cin >> n;
   cin.ignore();
   for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    istringstream iss(s);
    string word;
    string out = "god";
    int j = 0;
    while (iss >> word) {
      if (j != 0) {
          out += word;
      }
      j++;
    }
    cout << out << endl;
   }
   return 0;
}
