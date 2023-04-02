#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
  int answer = 0;

  char x = s[0];
  int cnt_x = 1;
  int cnt_not_x = 0;

  bool isyield = false;

  for (int i = 1; i < s.length(); i++) {
    if (isyield) {
      x = s[i];
      isyield = false;
      cnt_x = 1;
      cnt_not_x = 0;
      continue;
    }

    (x == s[i] ? cnt_x++ : cnt_not_x++);

    if (cnt_x == cnt_not_x) {
      answer++;
      isyield = true;
    }
  }

  if (!isyield)
    answer++;

  return answer;
}

int main() {
  cout << solution("banana") << '\n';
  return 0;
}
