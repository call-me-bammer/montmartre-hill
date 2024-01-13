#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(int a, int b)
{
    if (a == b)
        return false;

    string l = to_string(a);
    string s = to_string(b);

    int ldx = 0;
    int sdx = 0;
    int lcnt = 0;
    int scnt = 0;

    while (!((lcnt > 1) && (scnt > 1))) {
        if (l[ldx] > s[sdx]) {
            return true;
        } else if (l[ldx] < s[sdx]) {
            return false;
        }

        ldx += 1;
        sdx += 1;

        if (ldx == l.size()) {
            ldx = 0;
            lcnt += 1;
        }
        if (sdx == s.size()) {
            sdx = 0;
            scnt += 1;
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), compare);

    if (v[0] == 0) {
        cout << 0 << '\n';
    } else {
        for (int i: v)
            cout << i;
        cout << '\n';
    }

    return 0;
}
