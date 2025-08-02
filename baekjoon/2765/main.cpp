#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3.14159265358979323846

int main() {
  // d: inches
  // n: number of revolutions
  // t: time is seconds
  double d, t;
  int n;

  int c = 1;
  while (cin >> d >> n >> t) {
    if (n == 0) {
      continue;
    }

    // print miles, miles/hour
    double miles = 2 * PI * (d / 2) * n / 63360;
    double mph = miles / (t / 3600);
    cout << "Trip #" << c << ": "
         << fixed << setprecision(2)
         << miles << " " << mph << endl;
    c++;
  }
  
  return 0;
}
