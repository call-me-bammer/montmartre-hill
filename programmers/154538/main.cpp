#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int x, int y, int n) {
  if (x == y)
    return 0;
  
  int answer = 0;
  int* isVisited = new int[y + 1]();

  queue<int> q;
  q.push(x);

  int qCnt = q.size();

  while (!q.empty()) {
    int r = q.front();
    q.pop();
    qCnt--;

    if (r == y)
      break;

    for (int i = 1; i <= 3; i++) {
      int t = r;
      
      if (i == 1) t += n;
      else t *= i;

      if ((t <= y) && (isVisited[t] == 0)) {
        q.push(t);
        isVisited[t] = 1;
      }
    }

    if (qCnt == 0) {
      qCnt = q.size();
      answer++;
    }

  }
  
  if (isVisited[y] == 0) {
    delete isVisited;
    return -1;
  }

  delete isVisited;
  return answer;
}

int main() {
  cout << solution(10, 40, 5);
  //cout << solution(2, 2, 4);
  return 0;
}
