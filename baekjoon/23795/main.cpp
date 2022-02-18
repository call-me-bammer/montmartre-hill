#include <iostream>
using namespace std;

int main()
{
    int n, out = 0;

    while (1)
    {
        cin >> n;

        if (n == -1)
            break;
    
        out += n;
    }

    cout << out << endl;
    return 0;
}
