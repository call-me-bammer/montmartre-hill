#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string s = to_string(a) + to_string(b);
    string t = to_string(c) + to_string(d);

    long long u = 0;
    long long v = 0;

    for (int i = 0; i < s.size(); i++) {
        u += (s[i] - '0') * pow(10, s.size() - 1 - i);
    }

    for (int i = 0; i < t.size(); i++) {
        v += (t[i] - '0') * pow(10, t.size() - 1 - i);
    }

    cout << u + v << endl;
    return 0;
}
