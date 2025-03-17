#include <iostream>
#include <cstring>
#include <map>
using namespace std;

// 131+13=144
// 41+1=42

int main() {
  map<string, string> m;
  m["063"] = "0";
  m["010"] = "1";
  m["093"] = "2";
  m["079"] = "3";
  m["106"] = "4";
  m["103"] = "5";
  m["119"] = "6";
  m["011"] = "7";
  m["127"] = "8";
  m["107"] = "9";

  string s;
  while (cin >> s) {
    if (s == "BYE") {
      break;
    }

    string ans;
    int i = s.find('+');
    int j = s.find('=');
    
    string as = s.substr(0, i);
    string bs = s.substr(i + 1, j - i - 1);
    
    string a, b;
    for (int z = 0; z < as.size(); z += 3) {
      a += m[as.substr(z, 3)];
    }
    for (int z = 0; z < bs.size(); z += 3) {
      b += m[bs.substr(z, 3)];
    }
    
    string x = to_string(stoi(a) + stoi(b));
    for (int z = 0; z < x.size(); z++) {
      for (auto [key, val] : m) { // c++17
        if (val == string(1, x[z])) { // do not use 'to_string' to 'char'
          ans += key;
          break;
        }
      }
    }

    cout << s << ans << '\n';
  }

  return 0;
}
