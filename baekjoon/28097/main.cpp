#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        sum += t;
    }
    sum += 8 * (n - 1);

    cout << sum / 24 << ' ' << sum % 24 << '\n';
    return 0;
}
