#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int p = abs(a - b);
    int q = abs(b - c);

    // 3 (4) (5) 6 (7) (8) (9) 10
    // (3, 4) --- 3

    cout << max(p, q) - 1 << '\n';
    return 0;
}
