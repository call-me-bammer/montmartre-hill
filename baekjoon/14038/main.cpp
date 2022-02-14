#include <iostream>
using namespace std;

int main()
{
    char c;
    int cnt = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> c;

        if (c == 'W')
            cnt++;
    }

    if (cnt > 4)
        cout << 1 << endl;
    else if (cnt > 2)
        cout << 2 << endl;
    else if (cnt > 0)
        cout << 3 << endl;
    else
        cout << -1 << endl;

    return 0;
}
