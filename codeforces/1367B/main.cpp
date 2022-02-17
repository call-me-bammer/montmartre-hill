#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int a;
        int wrong_pos = 0;

        int odd_cnt = 0;
        int even_cnt = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> a;

            if (a % 2 == 0)
                even_cnt++;
            else
                odd_cnt++;

            if ((j % 2 == 0) && (a % 2 == 0))
                continue;

            if ((j % 2 == 1) && (a % 2 == 1))
                continue;

            wrong_pos++;
        }

        if ((n % 2 == 0) && (odd_cnt == even_cnt))
            cout << wrong_pos / 2 << '\n';

        else if ((n % 2 == 1) && (odd_cnt + 1 == even_cnt))
            cout << wrong_pos / 2 << '\n';

        else
            cout << -1 << '\n';

    }

    return 0;
}
