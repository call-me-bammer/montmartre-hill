#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define N_OF_SIZE 6

int main() {
  int n, t, p;
  cin >> n;

  vector<int> a(N_OF_SIZE);
  for (int i = 0; i < N_OF_SIZE; i++) {
    cin >> a[i];
  }
  cin >> t >> p;

  int ts = 0;
  for (int i = 0; i < N_OF_SIZE; i++) {
    ts += ceil(a[i] / (double)t);
  }


  cout << ts << endl
       << n / p << ' ' << n % p << endl;
  return 0;
}
