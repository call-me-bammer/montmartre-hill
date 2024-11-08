#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n, s;
        cin >> n;

        vector<int> dice;
        for (int j = 0; j < n; j++) {
            cin >> s;
            dice.push_back(s);
        }
        sort(dice.begin(), dice.end());
        
        int l = 0;
        for (int j = 0; j < n; j++) {
            if (dice[j] > l) {
                l++;
            }
        }

        cout << "Case #" << i << ": " << l << '\n';
    }

    return 0;
}
