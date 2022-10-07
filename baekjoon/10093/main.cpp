#include <iostream>
using namespace std;

typedef unsigned long long ull;

int main() {

    // 1,000,000,000,000,000
    ull a, b, diff;
    cin >> a >> b;

    if (a == b) {
        cout << 0 << '\n';
        return 0;
    } 

    if (a > b) {
        diff = a - b - 1;
        ull tmp = a;
        a = b;
        b = tmp;
    } else {
        diff = b - a - 1;
    }

    cout << diff << '\n';
    
    if (diff == 0) {
        return 0;
    }

    for (ull i = a + 1; i < b; i++)
        cout << i << ' ';
    cout << '\n';

    return 0;
}
