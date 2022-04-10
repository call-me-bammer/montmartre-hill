#include <iostream>
using namespace std;

void swap(int* a, int u, int v);
void print_array(int* a);

int main()
{
    int* a = new int[21];
    for (int i = 1; i <= 20; i++)
        a[i] = i;

    int u, v;

    for (int i = 0; i < 10; i++)
    {
        cin >> u >> v;
        swap(a, u, v);
    }

    print_array(a);

    delete a;
    return 0;
}

void swap(int* a, int u, int v)
{
    int len = v - u + 1;

    for (int i = u; i <= u + len / 2 - 1; i++)
    {
        int tmp = a[i];
        a[i] = a[u + v - i];
        a[u + v - i] = tmp;
    }
}

void print_array(int* a)
{
    for (int i = 1; i <= 20; i++)
        cout << a[i] << ' ';
    cout << endl;
}
