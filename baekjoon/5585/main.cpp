#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    n = 1000 - n;

    int coin[6] = {500, 100, 50, 10, 5, 1};

    int number_of_coins = 0;

    for (int i = 0; i < 6; i++)
    {
        number_of_coins += n / coin[i];
        n %= coin[i];
    }

    cout << number_of_coins << endl;

    return 0;
}
