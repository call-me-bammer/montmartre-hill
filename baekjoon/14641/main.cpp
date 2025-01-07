#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int m, n;
  cin >> m >> n;

  vector<vector<int>> t(26);

  for (int i = 0; i < m; i++) {
    char a, b;
    cin >> a >> b;
    t[a - 'a'].push_back(b - 'a');
  }

  for (int i = 0; i < n; i++) {
    string a, b;
    cin >> a >> b;

    if (a.size() != b.size()) {
      cout << "no\n";
      continue;
    }

    bool isSame = true;

    for (int j = 0; j < a.size(); j++) {
      if (a[j] == b[j]) {
        continue;
      }

      char initial = a[j];
      int isChecked[26] = {0};
      queue<char> q;
      q.push(a[j]);

      while (!q.empty()) {
        char current = q.front();
        q.pop();
        isChecked[current - 'a'] = 1;

        for (int k = 0; k < t[current - 'a'].size(); k++) {
          if (!isChecked[t[current - 'a'][k]]) {
            q.push(t[current - 'a'][k] + 'a');
          }
        }
      }

      if (!isChecked[b[j] - 'a']) {
        isSame = false;
        break;
      }
    }

    cout << (isSame ? "yes" : "no") << '\n';
  }

  return 0;
}
