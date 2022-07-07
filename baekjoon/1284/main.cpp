#include <iostream>
using namespace std;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    string addr;
    
    while (1) {
        cin >> addr;

        if (addr == "0")
            break;

        int width = 2 + addr.size() - 1;

        for (int i = 0; i < addr.size(); i++) {
            if (addr[i] == '1') {
                width += 2;
            } else if (addr[i] == '0') {
                width += 4;
            } else {
                width += 3;
            }
        }

        cout << width << '\n';
    }

    return 0;
}
