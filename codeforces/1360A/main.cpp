#include <iostream>
#include <cmath>

void swap(int& a, int& b);

int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    int t, a, b;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        std::cin >> a >> b;

        if (a < b)
            swap(a, b);

        if (a < 2 * b)
            std::cout << pow(2 * b, 2) << '\n';

        else
            std::cout << pow(a, 2) << '\n';
    }

}

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
