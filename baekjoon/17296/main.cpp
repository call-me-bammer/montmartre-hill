#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double a;
    int count = 0;
    bool isPressed = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == floor(a) && a != 0)
        {
            count += a;
            isPressed = false;
            continue;
        }

        if (a != floor(a) && !isPressed)
        {
            count = (count == 0 ? 1 : count);
            isPressed = true;
        }

        count += floor(a);
    }

    cout << count << '\n';
    return 0;
}
