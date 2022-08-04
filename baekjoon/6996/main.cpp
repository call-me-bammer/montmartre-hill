#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin >> n;

    string a, b;

    for (int j = 0; j < n; j++) {
        cin >> a >> b;

        if (a.size() != b.size()) {
            cout << a << " & " << b << " are NOT anagrams.\n";
            continue;
        }

        bool status = true;

        int alpha[26] = {0};
        int beta[26] = {0};

        for (int i = 0; i < a.size(); i++) {
            alpha[a[i] - 'a']++;
            beta[b[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (alpha[i] != beta[i]) {
                status = false;
            }
        }

        if (status == true) {
            cout << a << " & " << b << " are anagrams.\n";
        } else {
            cout << a << " & " << b << " are NOT anagrams.\n";
        }
    }

    return 0;
}
