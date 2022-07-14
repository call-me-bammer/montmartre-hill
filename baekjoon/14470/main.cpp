#include <iostream>
using namespace std;

int main() {

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    bool isFrozen = false;

    if (a < 0)
        isFrozen = true;

    int t = 0;

    while (a != b) {

        if (a < 0) {
            t += c;
            a++;
        } else if ((a == 0) && (isFrozen == true)) {
            t += d;
            isFrozen = false;
        } else if ((a >= 0) && (isFrozen == false)) {
            t += e;
            a++;
        }
    }

    cout << t << endl;
    return 0;
}
