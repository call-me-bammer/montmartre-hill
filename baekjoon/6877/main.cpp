#include <iostream>
using namespace std;

int main()
{
    int c, r;
    cin >> c >> r;

    int x_max = c;
    int y_max = r;
    int x = 0, y = 0;

    while (cin >> c >> r)
    {
        if (c == 0 && r == 0)
        {
            break;
        }

        x += c;
        y += r;

        if (x > x_max)
            x = x_max;
        if (x < 0)
            x = 0;

        if (y > y_max)
            y = y_max;
        if (y < 0)
            y = 0;

        cout << x << ' ' << y << '\n';
    }

    return 0;
}
