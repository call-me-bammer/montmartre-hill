#include <iostream>
using namespace std;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;

    bool isCanComplete = true;
    int currentHeight = 0;
    int currentWidth = 0;

    int l;
    for (int i = 0; i < n; i++)
    {
        cin >> l;
        currentWidth += l;

        if (currentWidth > w)
        {
            isCanComplete = false;
            break;
        }

        if (currentWidth == w)
        {
            currentWidth = 0;
            currentHeight++;
        }

        if (currentHeight == h)
        {
            break;
        }
    }

    cout << (isCanComplete ? "YES" : "NO") << '\n';
    return 0;
}
