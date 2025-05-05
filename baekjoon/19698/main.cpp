#include <iostream>
using namespace std;

int main() {
  int n, w, h, l;
  cin >> n >> w >> h >> l;

  int a = (w / l) * (h / l);

  cout << (n < a ? n : a) << endl;
  return 0;
}
