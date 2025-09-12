#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define N 4

int main() {
  vector<int> v(N);
  while (true) {
    bool breakFlag = true;
    for (int i = 0; i < N; i++) {
      cin >> v[i];
      if (v[i] != 0) {
        breakFlag = false;
      }
    }
    if (breakFlag) {
      break;
    }
    int stepsUntilConvergence = 0;
    while (true) {
      bool isConverged = true;
      for (int i = 1; i < N; i++) {
        if (v[i] != v[0]) {
          isConverged = false;
          break;
        }
      }
      if (isConverged) {
        break;
      }
      vector<int> nextV(N);
      for (int i = 0; i < N; i++) {
        nextV[i] = abs(v[i] - v[(i + 1) % N]);
      }
      v = nextV;
      stepsUntilConvergence++;
    }
    cout << stepsUntilConvergence << endl;
  }

  return 0;
}
