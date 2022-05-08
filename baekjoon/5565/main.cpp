#include <iostream>
using namespace std;

int main() {

    int sum, v;
    cin >> sum;

    for (int i = 0; i < 9; i++) {
        cin >> v;
        sum -= v;
    }

    cout << sum << endl;

    return 0;
}
