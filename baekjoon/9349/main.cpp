#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        cout << int(floor((n - k) / (k - 1))) << '\n';
    }

    return 0;
}
