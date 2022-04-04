#include <iostream>

#define LEN 5

void print_wood(int* a, int len);

int main()
{
    int* a = new int[LEN];

    for (int i = 0; i < LEN; i++)
        std::cin >> a[i];

    for (int i = 0; i < LEN - 1; i++)
    {
        for (int j = 1; j < LEN - i; j++)
        {
            if (a[j - 1] > a[j])
            {
                int tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;
            
                print_wood(a, LEN);
            }
        }
    }

    delete a;
    return 0;
}

void print_wood(int* a, int len)
{
    for (int i = 0; i < len; i++)
        std::cout << a[i] << ' ';
    std::cout << std::endl;
}
