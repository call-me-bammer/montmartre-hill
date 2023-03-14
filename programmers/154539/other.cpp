#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
  vector<int> answer(numbers.size());

  stack<int> s;
  s.push(0);

  for (int i = 1; i < numbers.size(); i++) {
    while ((!s.empty()) && (numbers[s.top()] < numbers[i])) {
      answer[s.top()] = numbers[i];
      s.pop();
    }
    s.push(i);
  }

  while (!s.empty()) {
    answer[s.top()] = -1;
    s.pop();
  }

  return answer;
}

int main() {
  //vector<int> t = {2, 3, 3, 5};
  //vector<int> t = {9, 1, 5, 3, 6, 2};
  //vector<int> t = {9, 1, 5, 7, 6, 2};
  //vector<int> t = {9, 1, 4, 5, 6, 2};
  //vector<int> t = {9, 1, 4, 5, 6, 8};
  //vector<int> t = {9, 1, 10, 5, 6, 4, 8};
  //vector<int> t = {9, 9, 9, 11, 9, 9, 10};
  //vector<int> t = {9, 10, 5, 7};
  //vector<int> t = {9, 8, 7, 5, 1};
  //vector<int> t = {1, 2, 3, 4, 5};
  //vector<int> t = {9, 1, 5, 6, 6, 2};
  vector<int> t = {2, 9, 1, 5, 3, 6, 2, 10};
  vector<int> v = solution(t);
  for (int i : v)
      cout << i << ' ';
  cout << '\n';
  return 0;
}
