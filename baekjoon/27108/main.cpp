#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

// sort function
bool cmp(pair<int, int> a, pair<int, int> b) {
    double x = (double)a.first / a.second;
    double y = (double)b.first / b.second;

    return x < y;
}

int main() {
    int n;
    cin >> n;

    // a / b
    set<pair<int, int>> s;
    s.insert({0, 1});
    s.insert({1, 1});

    int a, b;
    for (a = 1; a <= n; a++) {
        for (b = a + 1; b <= n; b++) {
            // euclidean algorithm
            int x = a, y = b;

            while (x) {
                int r = y % x;
                y = x;
                x = r;
            }

            s.insert({a / y, b / y});
        }
    }

    // set to vector
    vector<pair<int, int>> v(s.begin(), s.end());

    // sort
    sort(v.begin(), v.end(), cmp);

    // print
    cout << v.size() << '\n';
    for (auto p : v) {
        cout << p.first << "/" << p.second << '\n';
    }

    return 0;
}
