#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
  int answer = 0;

  int a[10001] = {0};
  int max = 0;

  for (int i : citations) {
    a[i]++;
    if (max < i)
      max = i;
  }

  int sum = 0;
  for (int i = max; i >= 0; i--) {
    sum += a[i];
    if (sum >= i) {
      answer = i;
      break;
    }
  }

  return answer;
}

int main() {
  cout << solution({3, 0, 6, 1, 5}) << '\n'; // 3
  return 0;
}
