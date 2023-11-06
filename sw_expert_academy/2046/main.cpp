#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    string s;

    for (int i = 0; i < n; i++)
        s += '#';
    cout << s << '\n';

    return 0;
}
