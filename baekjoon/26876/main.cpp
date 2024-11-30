#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int ah, am, bh, bm;
    sscanf(a.c_str(), "%d:%d", &ah, &am);
    sscanf(b.c_str(), "%d:%d", &bh, &bm);

    int count = 0;
    while (am != bm) {
        am++;
        if (am == 60) {
            am = 0;
            ah++;
            if (ah == 24) {
                ah = 0;
            }
        }
        count++;
    }

    while (ah != bh) {
        ah++;
        if (ah == 24) {
            ah = 0;
        }
        count++;
    }

    cout << count << '\n';
    return 0;
}
