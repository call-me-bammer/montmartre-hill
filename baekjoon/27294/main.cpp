#include <iostream>
using namespace std;

int main() {
    int t, s;
    cin >> t >> s;
    cout << (t >= 12 && t <= 16 && s == 0 ? 320 : 280) << '\n';
    return 0;
}
