#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3];

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 3);

    cout << arr[2] - arr[0] << endl;

    return 0;
}
