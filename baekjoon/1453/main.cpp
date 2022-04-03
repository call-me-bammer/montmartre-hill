#include <iostream>
// using namespace std;

int main()
{
    int n, p;
    std::cin >> n;

    // index : 0 1 2 3 ... 99 100
    int a[101] = {0};
    // int* a = new int[101]();

    int deny = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> p;

        // deny case
        if (a[p] != 0)
        {
            deny++;
            continue;
        }

        // accept case (a[p] == 0)
        a[p]++;
    }

    std::cout << deny << std::endl;

    return 0;
}
