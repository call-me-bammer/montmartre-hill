#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    
    string out, bin;
    cin >> bin;

    out = bin + "0000";

    reverse(bin.begin(), bin.end());
    reverse(out.begin(), out.end());

    int adder = 0;
    int tmp;

    for (int i = 0; i < out.size() + 1; i++) {

        if (i < bin.size()) {
            tmp = out[i] - '0' + bin[i] - '0' + adder;
        } else if (i < out.size()) {
            tmp = out[i] - '0' + adder;
        } else if (adder == 1) {
            out += '1';
            break;
        } else {
            break;
        }

        out[i] = tmp % 2 + '0';

        if (tmp >= 2) {
            adder = 1;
        } else {
            adder = 0;
        }
    }

    reverse(out.begin(), out.end());

    cout << out << endl;
    return 0;
}
