#include <iostream>
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums) {
  int answer = 0;

  set<int> s;
  for (int i : nums) {
    s.insert(i);
  }

  answer = min(nums.size() / 2, s.size());
  return answer;
}

int main() {
  cout << solution({3, 1, 2, 3}) << '\n';
  return 0;
}
