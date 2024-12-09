#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int j, a, n;
    cin >> j >> a;

    vector< pair<int, bool> > v;
    v.push_back(make_pair(0, false));

    char c;
    for (int i = 1; i <= j; i++) {
        cin >> c;
        if (c == 'S') {
            v.push_back(make_pair(1, false));
        } else if (c == 'M') {
            v.push_back(make_pair(2, false));
        } else {
            v.push_back(make_pair(3, false));
        }
    }

    int count = 0;
    for (int i = 0; i < a; i++) {
        cin >> c >> n;

        if (v[n].second) {
            continue;
        }
        
        int k = 0;
        if (c == 'S') {
            k = 1;
        } else if (c == 'M') {
            k = 2;
        } else {
            k = 3;
        }

        if (v[n].first >= k) {
            v[n].second = true;
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}
