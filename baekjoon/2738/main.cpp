#include <iostream>
using namespace std;

int** make_matrix(int n, int m);
void get_inputs(int** t, int n, int m);

int main()
{
    // mat[n][m]
    int n, m;
    cin >> n >> m;

    int** a = make_matrix(n, m);
    int** b = make_matrix(n, m);

    get_inputs(a, n, m);
    get_inputs(b, n, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] + b[i][j] << ' ';
        }
        cout << endl;
    }

    delete a;
    delete b;

    return 0;
}

int** make_matrix(int n, int m)
{
    int** t = new int*[n];
    for (int i = 0; i < n; i++)
        t[i] = new int[m]();

    return t;
}

void get_inputs(int** t, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> t[i][j];
        }
    }
}
