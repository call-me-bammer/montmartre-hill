#include <iostream>
using namespace std;

int main() {
  int s1, s2;
  cin >> s1 >> s2;

  bool isAccepted = true;
  bool wrong = false;
  bool whyWrong = false;

  for (int i = 0; i < s1; i++) {
    int a, b;
    cin >> a >> b;
    if (a != b) {
      isAccepted = false;
      wrong = true;
    }
  }

  for (int i = 0; i < s2; i++) {
    int a, b;
    cin >> a >> b;
    if (a != b) {
      isAccepted = false;
      whyWrong = true;
    }
  }

  if (isAccepted) {
    cout << "Accepted" << endl;
  } else if (wrong) {
    cout << "Wrong Answer" << endl;
  } else if (whyWrong) {
    cout << "Why Wrong!!!" << endl;
  }

  return 0;
}
