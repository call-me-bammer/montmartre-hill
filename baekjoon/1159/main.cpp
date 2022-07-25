#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin >> n;

    int alphabet_count[26] = {0};

    int starting_count = 0;

    string name;

    for (int i = 0; i < n; i++) {
        cin >> name;
        alphabet_count[name[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (alphabet_count[i] >= 5) {
            starting_count++;
        }
    }

    if (starting_count == 0) {
        cout << "PREDAJA\n";
    } else {
        for (int i = 0; i < 26; i++) {
            if (alphabet_count[i] >= 5) {
                cout << char('a' + i);
            }
        }
        cout << '\n';
    }

    return 0;
}
