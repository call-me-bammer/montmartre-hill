#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int T, n;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        cin >> n;
        printf("#%d %d\n", i, n / 3);
    }

    return 0;
}
