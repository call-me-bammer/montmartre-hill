#include <iostream>
using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool isTele = true;

    if ((a != 8) && (a != 9)) {
        isTele = false;
    } else if (b != c) {
        isTele = false;
    } else if ((d != 8) && (d != 9)) {
        isTele = false;
    }

    if (isTele) {
        cout << "ignore\n";
    } else {
        cout << "answer\n";
    }

    return 0;
}
