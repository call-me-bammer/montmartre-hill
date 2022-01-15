#include <iostream>
using namespace std;

int main()
{
    int t, c;
    cin >> t;

    int result = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> c;
        
        if (c == t)
            result++;
    }

    cout << result << endl;
    return 0;
}
