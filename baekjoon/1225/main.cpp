#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    if (a == "0")
    {
        cout << 0 << endl;
        return 0;
    }

    // max(c) = 90,000
    int c = 0;

    for (int i = 0; i < b.size(); i++)
    {
        c += b[i] - '0';
    }

    // max(out) = 810,000 * 10,000 = 8,100,000,000
    long long out = 0;

    for (int i = 0; i < a.size(); i++)
    {
        out += (a[i] - '0') * c;
    }

    cout << out << endl;

    return 0;
}
