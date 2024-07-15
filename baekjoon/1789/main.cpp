#include <iostream>
using namespace std;

int main()
{
    long long s;
    cin >> s;

    long long i = 1;
    while (s >= i)
    {
        s -= i;
        i++;
    }

    cout << i - 1 << '\n';
    return 0;
}
