#include <iostream>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int min = 1000000;

    int i = 0;

    for (; i * m <= n; i++)
    {
        int calc = b*i + a*(n-(i*m));

        if (min > calc)
            min = calc;
    }

    if (min > b*i)
        min = b*i;

    cout << min << endl;
    return 0;
}
