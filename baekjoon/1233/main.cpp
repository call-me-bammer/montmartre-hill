#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // max = 20 + 20 + 40 = 80
    int maxV = a + b + c;

    int* v = new int[maxV + 1]();

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int z = 1; z <= c; z++)
            {
                v[i + j + z]++;
            }
        }
    }

    int maxElementIndex = max_element(v, v + maxV + 1) - v;

    cout << maxElementIndex << endl;

    return 0;
}
