/* KOI 2022 1차 대회 초등부 1번 */
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a, b;

    int minTime = 1001;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        if ((a <= b) && (b < minTime)) {
            minTime = b;
        }
    }

    if (minTime == 1001) {
        cout << -1 << endl;
    } else {
        cout << minTime << endl;
    }
    
    return 0;
}
