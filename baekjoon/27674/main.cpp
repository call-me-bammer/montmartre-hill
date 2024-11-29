#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    string s;
    for (int i = 0; i < t; i++) {
        cin >> s;
        if (s.size() == 1) {
            cout << s << '\n';
            continue;
        }

        for (int j = 0; j < s.size() - 1; j++) {
            for (int k = j + 1; k < s.size(); k++) {
                if (s[j] < s[k]) {
                    char temp = s[j];
                    s[j] = s[k];
                    s[k] = temp;
                }
            }
        }

        long long a = stoll(s.substr(0, s.size() - 1));
        long long b = stoll(s.substr(s.size() - 1));

        cout << a + b << '\n';
    }

    return 0;
}
