#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
  string answer = "";
  
  unordered_map<string, int> um;
  for (string name : completion) {
    if (um.find(name) != um.end()) {
      um[name]++;
    } else {
      um[name] = 1;
    }
  }
  
  for (string name : participant) {
    if ((um.find(name) == um.end()) || (um[name] == 0)) {
      answer = name;
      break;
    }

    um[name]--;
  }

  return answer;
}

int main() {
  cout << solution({"mislav", "stanko", "mislav", "ana"}, {"stanko", "ana", "mislav"}) << '\n';
  return 0;
}
