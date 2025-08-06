#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int n;
  
  string biggestSeminar;
  int maxN = 0;
  for (int i = 0; i < 7; i++) {
    cin >> s >> n;
    if (n > maxN) {
      maxN = n;
      biggestSeminar = s;
    }
  }

  cout << biggestSeminar << endl;
  return 0;
}
