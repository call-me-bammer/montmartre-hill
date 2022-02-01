#include <iostream>
using namespace std;

int find_max_year(int m, int n);

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    int m, n, x, y;

    for (int i = 0; i < t; i++)
    {
        cin >> m >> n >> x >> y;

        // to something.

        int max_year = find_max_year(m, n);

        int j = 0, z = 0;

        while ((m * j + x != n * z + y) && ((m * j + x <= max_year) || (n * z + y <= max_year)))
        {
            if (m * j + x < n * z + y)
                j++;

            else
                z++;
        }

        if ((m * j + x > max_year) || (n * z + y > max_year))
        {
            cout << -1 << '\n';
        }

        else
        {
            cout << m * j + x << '\n';
        }
    }

    return 0;
}

int find_max_year(int m, int n)
{
    int i = 1, j = 1;

    while (m * i != n * j)
    {
        if (m * i < n * j)
            i++;

        else
            j++;
    }

    return m * i;
}
