#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int c = 0; c < t; c++) {
    int n;
    string s;

    // get and store names of people
    cin.ignore();
    getline(cin, s);
  
    vector<string> p;
    int i = 0;
    int pos;
    while ((pos = s.find(' ', i)) != string::npos) {
      p.push_back(s.substr(i, pos - i));
      i = pos + 1;
    }
    p.push_back(s.substr(i));

    // get a name and a number
    cin >> s >> n;

    // find the index of the name
    int idx = find(p.begin(), p.end(), s) - p.begin();
    int m = 1;
    while (m != n) {
      m++;
      idx++;
      if (idx == p.size()) {
        idx = 0;
      }
    }

    // print the name
    cout << p[idx] << '\n';
  }

  return 0;
}
