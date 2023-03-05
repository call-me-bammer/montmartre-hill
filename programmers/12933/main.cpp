#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool comp(char a, char b) {
    return a > b;
}

long long solution(long long n) {
    long long answer = 0;

    string s = to_string(n);
    sort(s.begin(), s.end(), comp);

    for (int i = 0; i < s.length(); i++)
      answer += (long long)pow(10, s.length() - i - 1) * (s[i] - '0');

    return answer;
}

int main() {
  cout << solution(118372) << '\n';
  return 0;
}
