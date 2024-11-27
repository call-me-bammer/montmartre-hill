#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    char result = '*';

    if (a != b && a != c)
        result = 'A';
    else if (b != a && b != c)
        result = 'B';
    else if (c != a && c != b)
        result = 'C';
        
    cout << result << endl;
    return 0;
}
