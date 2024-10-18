#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define MAX_DISHES 200000

int main() {
    int n;
    cin >> n;

    int sum = 0;

    int a[200000] = { 0 };
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);

    int park = 0;
    for (int i = 0; i < floor(n / 2); i++) {
        park += a[i];
    }

    cout << park << ' ' << sum - park << endl;
    return 0;
}
