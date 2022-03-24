#include <iostream>
using namespace std;

int main()
{
    int b;
    cin >> b;

    int p = 5 * b - 400;

    cout << p << endl;

    if (p > 100) // below sea level
        cout << -1 << endl;
    else if (p < 100) // above sea level
        cout << 1 << endl;
    else // at sea level
        cout << 0 << endl;

    return 0;
}
