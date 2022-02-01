#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int s, k, h;
    cin >> s >> k >> h;

    int sum = s + k + h;

    if (sum >= 100)
    {
        cout << "OK" << endl;
        return 0;
    }

    int m = min(min(s, k), h);
    
    if (m == s)
    {
        cout << "Soongsil" << endl;
    }

    else if (m == k)
    {
        cout << "Korea" << endl;
    }

    else {
        cout << "Hanyang" << endl;
    }

    return 0;
}
