#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int k, d, a;
    scanf("%d/%d/%d", &k, &d, &a);

    // he is false, and hasu.
    if ((k + a < d) || (d == 0))
        cout << "hasu" << endl;

    // he is true, and gosu.
    else
        cout << "gosu" << endl;

    return 0;
}
