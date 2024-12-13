#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, x2;
    int a, b, c, d, e;

    cin >> x1 >> x2;
    cin >> a >> b >> c >> d >> e;

    // h(x) = ax^2 + (b - d)x + (c - e)
    // h(x) = ax^3/3 + (b - d)x^2/2 + (c - e)x
    int h2 = a * pow(x2, 3) / 3 + (b - d) * pow(x2, 2) / 2 + (c - e) * x2;
    int h1 = a * pow(x1, 3) / 3 + (b - d) * pow(x1, 2) / 2 + (c - e) * x1;

    cout << h2 - h1 << '\n';
    return 0;
}
