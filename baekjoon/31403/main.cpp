#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << a + b - c << '\n';

    string aa = to_string(a);
    string bb = to_string(b);

    cout << stoi(aa + bb) - c << '\n';
    
    return 0;
}
