#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    int n;
    cin >> n;

    int m, r;

    string s;

    do {
        
        m = n / -2;
        r = n % -2;

        if (r == -1) {
            r = 1;
            m++;
        }

        n = m;

        s += to_string(r);

    } while (m != 0);

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}
