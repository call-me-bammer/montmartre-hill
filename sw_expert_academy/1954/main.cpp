#include <iostream>

using namespace std;

int d[][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

int main()
{
	int t;
	cin >> t;

	int n;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;

		// initialize
		int **a = new int*[n];
		for (int j = 0; j < n; j++)
			a[j] = new int[n]();

		int x = 0, y = -1;
		int h = 0;

		for (int j = 1; j <= n * n; j++)
		{
			int p = x + d[h][0];
			int q = y + d[h][1];

			if ((p < 0) || (p >= n) || (q < 0) || (q >= n) || (a[p][q] != 0))
			{
				h = (h < 3 ? h + 1 : 0);
				j--;
				continue;
			}

			x = p;
			y = q;

			a[x][y] = j;
		}

		// print
		cout << '#' << i << '\n';
		for (int j = 0; j < n; j++)
		{
			for (int z = 0; z < n; z++)
				cout << a[j][z] << ' ';
			cout << '\n';
		}
	}

	return 0;
}
