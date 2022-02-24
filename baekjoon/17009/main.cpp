#include <iostream>
using namespace std;

int main()
{
    int a, b;

    int score_a = 0;
    int score_b = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        score_a += a * (3 - i);
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> b;
        score_b += b * (3 - i);
    }

    if (score_a > score_b)
        cout << "A" << endl;

    else if (score_a < score_b)
        cout << "B" << endl;

    else
        cout << "T" << endl;

    return 0;
}
