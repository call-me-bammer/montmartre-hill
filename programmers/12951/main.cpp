#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    int flag = 0;

    for (int i = 0; i < s.length(); i++) {

      if (s[i] == ' ') {
        answer += ' ';
        flag = 0;
      }
      
      else if (s[i] < 'A') {
        answer += s[i];
        flag = 1;
      }
      else if (flag == 0) {
        answer += toupper(s[i]);
        flag = 1;
      }

      else {
        answer += tolower(s[i]);
      }
    }

    return answer;
}

int main() {
  cout << solution("3people unFollowed me") << '\n';
  cout << solution("for the last week") << '\n';
  return 0;
}
