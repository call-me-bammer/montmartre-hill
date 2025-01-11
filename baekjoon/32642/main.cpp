#include <iostream>
using namespace std;

typedef long long ll;

int main() {
  int n;
  cin >> n;

  int anger = 0;
  ll sumOfAnger = 0;
  for (int i = 0; i < n; i++) {
    int isRain;
    cin >> isRain;
    if (isRain) {
      anger++;
    } else {
      anger--;
    }
    sumOfAnger += anger;
  }

  cout << sumOfAnger << '\n';
  return 0;
}
