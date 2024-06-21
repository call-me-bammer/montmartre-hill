#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

set<char> small;
set<string> pw;

void bf(string s, int depth);

int main() {
    // 2 1 / 7
    int n, m;
    char a;
    string s;

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a;
        small.insert(a);
    }

    for (int i = 0; i < n; i++)
        s += to_string(0);
    
    bf(s, n - 1);

    cout << pw.size() << '\n';
    return 0;
}

void bf(string s, int depth) {
    for (int i = 0; i <= 9; i++) {
        s[depth] = '0' + i;
        if (depth != 0) {
            bf(s, depth - 1);
            continue;
        }

        set<char> large;
        for (int j = 0; j < s.size(); j++) {
            large.insert(s[j]);
        }

        if (includes(large.begin(), large.end(), small.begin(), small.end())) {
            pw.insert(s);
        }
    }
}
