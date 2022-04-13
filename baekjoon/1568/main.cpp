#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    int time = 0;

    while (n != 0)
    {
        if (n < i)
            i = 1;

        n -= i;
        i++;

        time++;
    }

    cout << time << endl;

    return 0;
}
