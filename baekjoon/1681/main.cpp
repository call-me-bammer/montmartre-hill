#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    int i = 0;
    int cnt = 0;

    while (cnt != n)
    {
        i++;

        if (to_string(i).find(to_string(l)) != string::npos)
            continue;

        cnt++;
    }

    cout << i << endl;
    return 0;
}
