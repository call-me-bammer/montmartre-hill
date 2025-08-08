#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> p = {13, 7, 5, 3, 3, 2};

  vector<double> scores = {0, 1.5};
  for (int i = 0; i < 2; i++) {
    int n;
    for (int j = 0; j < 6; j++) {
      cin >> n;
      scores[i] += p[j] * (double)n;
    }
  }

  if (scores[0] > scores[1]) {
    cout << "cocjr0208" << endl;
  } else if (scores[0] < scores[1]) {
    cout << "ekwoo" << endl;
  }

  return 0;
}
