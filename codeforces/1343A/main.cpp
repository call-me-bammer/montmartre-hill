#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        int k = 2;

        while (n % (int)(pow(2, k) - 1) != 0)
        {
            k++;
        }

        cout << n / (int)(pow(2, k) - 1) << '\n';
    }

    return 0;
}
