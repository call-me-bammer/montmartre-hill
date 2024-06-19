#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double w, h;
    cin >> w >> h;

    cout << fixed << setprecision(1) << w * h / 2 << '\n';
    return 0;
}
