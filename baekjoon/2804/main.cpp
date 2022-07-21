#include <iostream>
#include <string>
using namespace std;

int main() {

    string a, b;
    cin >> a >> b;

    bool isFound = false;

    int row, col;

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (a[i] == b[j]) {
                isFound = true;
                row = i;
                col = j;
                break;
            }
        }

        if (isFound) { break; }
    }

    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            
            if (i == col) {
                cout << a;
                break;
            }

            else if (j == row) {
                cout << b[i];
            }

            else {
                cout << '.';
            }
        }

        cout << '\n';
    }

    return 0;
}
