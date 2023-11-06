#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    int p, q, r, s, w;

    for (int i = 1; i <= T; i++)
    {
        cin >> p >> q >> r >> s >> w;
        printf("#%d %d\n", i, min(p * w, q + (r >= w ? 0 : w - r) * s));
    }

    return 0;
}
