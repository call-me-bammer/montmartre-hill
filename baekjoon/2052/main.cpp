#include <iostream>
#include <string>
using namespace std;

    /*
    0.5
    0.25
    0.125
    0.0625
    0.03125
    */

int main() {
    string s = "0.";
    string r = "5";

    int n;
    cin >> n;
    
    for (int i = 2; i <= n; i++) {
        int adder = 0;
        string temp = "";

        for (int j = 0; j < r.size(); j++) {
            temp += to_string(((r[j] - '0') / 2 + adder));
            if ((r[j] - '0') % 2 == 1) {
                adder = 5;
            } else {
                adder = 0;
            }
        }
        if (adder == 5) {
            temp += "5";
        }

        r = temp;
    }

    cout << s + r << endl;
    return 0;
}
