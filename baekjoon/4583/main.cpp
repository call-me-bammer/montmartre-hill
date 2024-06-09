#include <iostream>
using namespace std;

int main() {
    string s;
    string m = "bdpqiovwx";

    while (1) {
        cin >> s;
        if (s == "#") {
            return 0;
        }

        string out = "";
        bool isInvalid = false;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (m.find(s[i]) == string::npos) {
                isInvalid = true;
                break;
            }
            switch (s[i]) {
                case 'b':
                    out += 'd';
                    break;
                case 'd':
                    out += 'b';
                    break;
                case 'p':
                    out += 'q';
                    break;
                case 'q':
                    out += 'p';
                    break;
                default:
                    out += s[i];
                    break;
            }
        }

        if (isInvalid) {
            cout << "INVALID\n";
        } else {
            cout << out << '\n';
        }
    }

    return 0;
}
