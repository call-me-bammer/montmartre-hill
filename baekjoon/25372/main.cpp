#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if ((s.size() >= 6) && (s.size() <= 9))
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
