#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
  int answer = 1;
  unordered_map<string, int> um;

  for (auto i : clothes) {
    if (um.find(i[1]) != um.end()) {
      um[i[1]]++;
    } else {
      um[i[1]] = 1;
    }
  }

  if (um.size() == 1)
    return um.begin()->second;
  
  for (auto i = um.begin(); i != um.end(); i++)
    answer *= (i->second + 1);

  return answer - 1;
}

int main() {
  vector<vector<string>> clothes = {{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}};
  cout << solution(clothes) << '\n';
  return 0;
}
