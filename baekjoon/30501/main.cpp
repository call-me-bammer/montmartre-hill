#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.find('S') != string::npos)
        {
            cout << s << '\n';
            break;
        }
    }
    return 0;
}