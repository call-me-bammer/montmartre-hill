#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int storey) {
  int answer = 0;
  string s = to_string(storey);

  int i;
  for (i = 0; i < s.length(); i++) {
    s = to_string(storey);
    reverse(s.begin(), s.end());
    
    #ifdef DEBUG
    cout << "storey : " << storey << ", len : " << s.length() << '\n';
    #endif

    if ((s[i] > '5') || ((s[i] == '5') && (i < s.length() - 1) && (s[i+1] >= '5'))) {
      answer += 10 - (s[i] - '0');
      storey += (10 - (s[i] - '0')) * pow(10, i);
    } else {
      answer += (s[i] - '0');
      storey -= (s[i] - '0') * pow(10, i);
    }
  }

  if (storey != 0)
    answer += to_string(storey)[0] - '0';

  #ifdef DEBUG
  cout << "last : " << storey << '\n';
  cout << "test : " << pow(10, i) << '\n';
  #endif
  return answer;
}

int main() {
  cout << solution(10) << '\n';
  cout << solution(16) << '\n';
  cout << solution(2554) << '\n';
  cout << solution(89) << '\n'; // not 5, 3.
  cout << solution(88763) << '\n'; // not 18, 11.
  cout << solution(999) << '\n'; // 2
  cout << solution(100000000) << '\n';
  cout << solution(99999999) << '\n';
  cout << solution(555) << '\n'; // not 15, 14.
  cout << solution(55) << '\n';
  cout << solution(45) << '\n';
  return 0;
}
