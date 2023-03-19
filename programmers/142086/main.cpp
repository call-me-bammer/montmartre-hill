#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
  vector<int> answer;

  unordered_map<char, int> m;

  for (int i = 0; i < s.length(); i++) {
    if (m.find(s[i]) == m.end()) {
      m[s[i]] = i;
      answer.push_back(-1);
    } else {
      answer.push_back(i - m[s[i]]);
      m[s[i]] = i;
    }
  }

  return answer;
}

int main() {
  //vector<int> v = solution("banana"); // -1, -1, -1, 2, 2, 2
  vector<int> v = solution("foobar"); // -1, -1, 1, -1, -1, -1
  for (int i : v)
    cout << i << ' ';
  cout << '\n';
  return 0;
}
