#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a;
        int cnt = 0;
        for (int j = 1; j < 4; j++) {
            cin >> b;
            if (a < b) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}