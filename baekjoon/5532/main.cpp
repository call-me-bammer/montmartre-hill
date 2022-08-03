#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int l, a, b, c, d;
    cin >> l >> a >> b >> c >> d;

    cout << l - max(ceil((double)a / c), ceil((double)b / d)) << endl;
    return 0;
}
