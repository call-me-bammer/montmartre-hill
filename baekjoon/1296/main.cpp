#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

string love = "LOVE";

int main() {
  string name;
  cin >> name;

  vector<int> v(4, 0);
  for (int i = 0; i < name.size(); i++) {
    string::size_type f = love.find(name[i]);
    if (f != string::npos) {
      v[f]++;
    }
  }

  int n;
  cin >> n;

  vector<pair<string, int>> r;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    vector<int> vv(4, 0);
    for (int i = 0; i < s.size(); i++) {
      string::size_type f = love.find(s[i]);
      if (f != string::npos) {
        vv[f]++;
      }
    }

    int L = v[0] + vv[0];
    int O = v[1] + vv[1];
    int V = v[2] + vv[2];
    int E = v[3] + vv[3];

    int p = ((L+O)*(L+V)*(L+E)*(O+V)*(O+E)*(V+E)) % 100;
    r.push_back(make_pair(s, p));
  }

  sort(r.begin(), r.end());

  int m = -1;
  string answer;
  for (int i = 0; i < r.size(); i++) {
    if (m < r[i].second) {
      m = r[i].second;
      answer = r[i].first;
    }
  }

  cout << answer << '\n';
  return 0;
}
