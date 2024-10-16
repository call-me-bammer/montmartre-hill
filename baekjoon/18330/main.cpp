#include <iostream>
using namespace std;

int main() {
    int l, currentQuata;
    cin >> l >> currentQuata;

    int totalQuata = currentQuata + 60;

    int leftover = 0;
    if (l - totalQuata > 0)
        leftover = l - totalQuata;

    cout << (l - leftover) * 1500 + leftover * 3000 << '\n';
    return 0;
}
