#include <iostream>
#include <algorithm>
using namespace std;

int find_start_binary(string a) {
    int apos = 0;
    for (int j = 0; j < a.size(); j++) {
        if (a[j] == '1') {
            apos = j;
            break;
        }

        if (a[j] == '0' && j == a.size() - 1)
            apos = j;
    }
    return apos;
}

int main() {
    int t;
    cin >> t;

    string a, b;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        int apos = find_start_binary(a);
        int bpos = find_start_binary(b);

        a = a.substr(apos);
        b = b.substr(bpos);

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        if (b.size() > a.size()) {
            string tmp = b;
            b = a;
            a = tmp;
        }

        int adder = 0;
        string out = "";
        for (int i = 0; i < a.size(); i++) {
            int sum = 0;
            if (i < b.size())
                sum = int(a[i] - '0') + int(b[i] - '0') + adder;
            else
                sum = int(a[i] - '0') + adder;

            if (sum >= 2) {
                sum -= 2;
                adder = 1;
            } else {
                adder = 0;
            }

            out += sum + '0';
        }
        if (adder == 1)
            out += adder + '0';

        reverse(out.begin(), out.end());
        cout << out << '\n';
    }

    return 0;
}
