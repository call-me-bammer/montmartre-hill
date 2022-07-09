#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double x, y;
    int n;

    cin >> x >> y >> n;

    double maxRatio = y / x;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        if (maxRatio < (y / x)) {
            maxRatio = y / x;
        }
    }

    cout << fixed << setprecision(2) << 1000 / maxRatio << endl;
    return 0;
}
