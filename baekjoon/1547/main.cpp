#include <iostream>
#include <algorithm>
using namespace std;

void swap(int* a, int x, int y);

int main()
{
    int m, x, y;
    cin >> m;

    int a[4] = {0, 1, 0, 0};

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
    
        swap(a, x, y);
    }

    cout << max_element(a, a + 4) - a << endl;

    return 0;
}

void swap(int* a, int x, int y)
{
    int tmp = a[x];
    a[x] = a[y];
    a[y] = tmp;
}
