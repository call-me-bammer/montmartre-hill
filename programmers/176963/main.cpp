#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
  vector<int> answer;

  map<string, int> m;
  for (int i = 0; i < name.size(); i++)
    m.insert({name[i], yearning[i]});

  for (auto i : photo) {
    int scores = 0;
    for (auto j : i)
      scores += m[j];
    answer.push_back(scores);
  }

  return answer;
}

int main() {
  vector<int> result = solution({"may", "kein", "kain", "radi"}, {5, 10, 1, 3}, {{"may", "kein", "kain", "radi"}, {"may", "kein", "brin", "deny"}, {"kon", "kain", "may", "coni"}});
  for (int i : result)
    cout << i << ' ';
  cout << '\n';
  return 0;
}
