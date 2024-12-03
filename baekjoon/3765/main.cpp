#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    while (getline(cin, s, '\n')) {
        cout << s << '\n';
    }

    return 0;
}
