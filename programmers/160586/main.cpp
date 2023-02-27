#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;

    int alpha[26] = {0};

    //cout << keymap.size() << '\n';
    for (int i = 0; i < keymap.size(); i++) {
      //cout << keymap[i].length() << '\n';
      for (int j = 0; j < keymap[i].length(); j++) {
        //cout << keymap[i][j] - 'A' << ' ';
        int k = alpha[keymap[i][j] - 'A'];

        if ((k > j + 1) || (k == 0))
          alpha[keymap[i][j] - 'A'] = j + 1;
      }
    }

    for (int i = 0; i < targets.size(); i++) {
      int result = 0;
      for (int j = 0; j < targets[i].length(); j++) {
        int t = alpha[targets[i][j] - 'A'];

        if (t == 0) {
          result = -1;
          break;
        }

        result += t;
      }
      answer.push_back(result);
    }

    return answer;
}

int main() {

  vector<string> k, t;
  k.push_back("AGZ");
  k.push_back("BSSS");
  t.push_back("ASA");
  t.push_back("BGZ");

  vector<int> v = solution(k, t);

  for (auto i : v) {
    cout << i << ' ';
  }
  cout << '\n';

  return 0;
}
