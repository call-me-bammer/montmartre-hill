#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m = 0;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m = max(m, a[i]);
    }

    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum += m - a[i];
    }

    cout << sum << endl;
    return 0;
}
