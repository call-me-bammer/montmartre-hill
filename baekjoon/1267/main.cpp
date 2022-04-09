#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n;

    int y = 0, m = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> t;

        y += ((t / 30) + 1) * 10;
        m += ((t / 60) + 1) * 15;
    }

    if (y == m)
    {
        cout << "Y M " << y << endl;
    }

    else if (y > m)
    {
        cout << "M " << m << endl;
    }

    else
    {
        cout << "Y " << y << endl;
    }

    return 0;
}
