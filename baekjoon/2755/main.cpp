#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

#define Q 0.3

int main() {
  int n;
  cin >> n;
  
  float gpa = 0.0;
  int credit_sum = 0;
  for (int i = 0; i < n; i++) {
    string subject, grade;
    int credit;
    cin >> subject >> credit >> grade;

    // count credit sum
    credit_sum += credit;

    // check F grade
    if (grade[0] == 'F') {
      continue;
    }

    float K = 0.0;
    if (grade[1] != '0')
      K += (',' - grade[1]) * Q;
    
    gpa += credit * (4 - (grade[0] - 'A') + K);
  }

  gpa /= credit_sum;
  cout << fixed << setprecision(2) << gpa << endl;
  return 0;
}
