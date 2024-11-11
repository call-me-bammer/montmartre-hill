#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int zeros = 0;
    int ones = 0;

    if (s[0] == '0') {
        zeros++;
    } else {
        ones++;
    }

    int current = s[0];
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == current) {
            continue;
        }

        if (s[i] == '0') {
            zeros++;
        } else {
            ones++;
        }
        
        current = s[i];
    }

    cout << min(zeros, ones) << '\n';
    return 0;
}
