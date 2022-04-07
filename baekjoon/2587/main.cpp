#include <iostream>
#include <algorithm>
using namespace std;

#define LEN 5

int main()
{
    int n;
    
    int avg = 0;
    int med;

    int* a = new int[LEN]();

    for (int i = 0; i < LEN; i++)
    {
        cin >> a[i];
        avg += a[i];
    }

    sort(a, a + LEN);

    avg /= LEN;
    med = a[2];

    cout << avg << endl
         << med << endl;

    delete a;
    return 0;
}
