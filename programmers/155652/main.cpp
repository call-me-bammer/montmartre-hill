#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";

    for (int i = 0; i < s.length(); i++) {
      char c = s[i];
      for (int j = 0; j < index; j++) {
        do {
          c++;
          if (c > 'z') c = 'a';
        } while (skip.find(c) != string::npos);
      }
      answer += c;
    }

    return answer;
}

int main() {
  cout << solution("aukks", "wbqd", 5) << '\n';
  return 0;
}
