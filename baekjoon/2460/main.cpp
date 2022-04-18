#include <iostream>
using namespace std;

int main()
{
    int p = 0;
    int max = 0;

    int a, b;

    for (int i = 0; i < 10; i++)
    {
        cin >> a >> b;

        p -= a;
        p += b;

        if (max < p)
            max = p;
    }

    cout << max << endl;
    return 0;
}
