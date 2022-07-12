#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if (2 * c <= a + b) {
        cout << (a + b) - 2 * c << endl;
    } else {
        cout << a + b << endl;
    }

    return 0;
}
