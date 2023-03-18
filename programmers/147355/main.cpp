#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int solution(string t, string p) {
  int answer = 0;

  for (int i = 0; i < t.length() - p.length() + 1; i++) {
    if (t.substr(i, p.length()).compare(p) <= 0)
      answer++;
  }

  return answer;
}

int main() {
  cout << solution("3141592", "271") << '\n';
  return 0;
}
