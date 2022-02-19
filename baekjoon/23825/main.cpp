#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    cout << min(n / 2, m / 2) << endl;
    return 0;
}