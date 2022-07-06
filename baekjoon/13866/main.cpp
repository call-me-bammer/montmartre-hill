#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int sum = 0;
    int a[4];

    for (int i = 0; i < 4; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int mini = 100000000;

    for (int i = 1; i < 4; i++) {
        mini = min(mini, abs(sum - (a[0] + a[i]) - (a[0] + a[i])));
    }

    cout << mini << endl;

    return 0;
}
