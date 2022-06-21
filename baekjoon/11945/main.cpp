#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    string line;

    for (int i = 0; i < n; i++) {
        cin >> line;
        reverse(line.begin(), line.end());
        cout << line << '\n';
    }

    return 0;
}
