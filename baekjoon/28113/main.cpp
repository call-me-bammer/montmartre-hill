#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    if (max(n, b) > a) {
        cout << "Bus\n";
    } else if (max(n, b) < a) {
        cout << "Subway\n";
    } else {
        cout << "Anything\n";
    }

    return 0;
}
