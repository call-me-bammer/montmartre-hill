#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cin >> s;

    int isFa;

    for (int i = 0; i < 1000; i++) {

        isFa = (s[0] - '0') * s.size();
        
        if (s == to_string(isFa)) {
            cout << "FA\n";
            return 0;
        }

        s = to_string(isFa);

    }

    cout << "NFA\n";
    return 0;
}
