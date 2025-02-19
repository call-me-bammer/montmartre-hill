#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

#define MAX 10000

int main() {
  int n;
  cin >> n;

  double f[MAX];
  for (int i = 0; i < n; i++) {
    cin >> f[i];
  }

  vector<double> v;
  for (int i = 0; i < n; i++) {
    double subMax = 0.0;
    double a = 1.0;
    for (int j = i; j < n; j++) {
      a *= f[j];
      if (subMax < a)
        subMax = a;
    }
    v.push_back(subMax);
  }

  cout << fixed << setprecision(3)
       << *max_element(v.begin(), v.end()) << endl;
  return 0;
}
