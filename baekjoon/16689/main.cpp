#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        v.push_back({a, b});
    }

    int max_t = -1;
    for (int i = 0; i <= n; i++) {

        int count = 0;
        for (auto p : v) {
            if (i >= p.first && i <= p.second) {
                count++;
            }
        }

        if (count == i) {
            max_t = i;
        }
    }

    cout << max_t << '\n';
    return 0;
}
