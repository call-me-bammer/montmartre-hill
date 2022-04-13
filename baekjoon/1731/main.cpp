#include <iostream>
using namespace std;

int main()
{
    // 3 <= n <= 50
    int n;
    cin >> n;

    int* a = new int[n]();

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // status { 0 : cd, 1 : cr }
    int status = -1;
    int cd, cr;

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
            cd = a[i+1] - a[i];

        else if (cd == (a[i+1] - a[i]))
        {
            status = 0;
            break;
        }

        else {
            cr = (int)a[i+1] / a[i];
            status = 1;
            break;
        }
    }

    if (status)
    {   
        cout << a[n-1] * cr << endl;
    }
    else
    {
        cout << a[n-1] + cd << endl;
    }

    delete a;
    return 0;
}
