#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());

    bool carry = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] < '5') {
            carry = false;
            continue;
        }

        for (int j = i; j >= 0; j--)
            s[j] = '0';
        carry = true;

        if (i < s.size() - 1) {
            s[i + 1] += 1;
            carry = false;
        }
    }

    if (carry)
        s.push_back('1');

    reverse(s.begin(), s.end());
    cout << s << '\n';
    return 0;
}
