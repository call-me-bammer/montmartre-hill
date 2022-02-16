#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int l;
    cin >> l;

    int n;
    char o;

    for (int i = 0; i < l; i++)
    {
        cin >> n >> o;

        for (int j = 0; j < n; j++)
        {
            cout << o;
        }
        cout << '\n';
    }

    return 0;
}
