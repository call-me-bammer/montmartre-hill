#include <iostream>
using namespace std;

// 1 : broken button
int a[10] = {0};

int main()
{
    int n, m, b;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> b;
        a[b] = 1;
    }

    int cnt = 0;

    cout << cnt << endl;

    return 0;
}
