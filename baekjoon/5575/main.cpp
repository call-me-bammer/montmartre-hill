#include <iostream>
using namespace std;

int main() {

    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, m, s;
    
    int start = 0;
    int end = 0;
    int during = 0;

    for (int i = 0; i < 3; i++) {
        cin >> h >> m >> s;

        start = h * 3600 + m * 60 + s;

        cin >> h >> m >> s;

        end = h * 3600 + m * 60 + s;
    
        during = end - start;

        h = during / 3600;
        during %= 3600;

        m = during / 60;
        during %= 60;

        s = during;

        cout << h << ' ' << m << ' ' << s << '\n';
    }

    return 0;
}
