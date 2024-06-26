#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;

        string s = "Round 1";

        if (n <= 4500)
            s = "Round 2";

        if (n <= 1000)
            s = "Round 3";

        if (n <= 25)
            s = "World Finals";

        cout << "Case #" << i << ": " << s << '\n';
    }

    return 0;
}