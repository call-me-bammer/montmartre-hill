#include <iostream>
using namespace std;

int main()
{
    int m, f;

    do {
        cin >> m >> f;
        if ((m == 0) && (f == 0))
            break;

        cout << m + f << endl;
    } while (1);

    return 0;
}
