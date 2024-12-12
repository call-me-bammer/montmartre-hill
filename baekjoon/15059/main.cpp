#include <iostream>
using namespace std;

int main() {
    int ca, ba, pa;
    int cr, br, pr;

    cin >> ca >> ba >> pa;
    cin >> cr >> br >> pr;

    cout << max(0, cr - ca)
          + max(0, br - ba)
          + max(0, pr - pa) << '\n';
    return 0;
}
