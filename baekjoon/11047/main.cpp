#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int* a = new int[n]();

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = n - 1;
    int out = 0;

    while (k != 0)
    {
        out += k / a[i];
        k %= a[i];
        i--;
    }

    cout << out << endl;

    delete a;

    return 0;
}
