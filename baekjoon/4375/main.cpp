#include <iostream>
#include <string>
using namespace std;

int make_dividend(int n);

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    
    do {
        cin >> s;
        if (cin.eof()) break;

        int n = stoi(s);
        int res = s.size() - 1;

        int d = make_dividend(n);

        while (d % n != 0)
        {
            if (n > d)
            {
                d = d * 10 + 1;
                res++;
                continue;
            }

            d %= n;
        }

        cout << res + 1 << '\n';
    } while(true);

    return 0;
}

int make_dividend(int n)
{
    int digits = 0;

    do {
        ++digits;
        n /= 10;
    } while (n);

    int res = 1;

    for (int i = 1; i < digits; i++)
    {
        res = res * 10 + 1;
    }

    return res;
}
