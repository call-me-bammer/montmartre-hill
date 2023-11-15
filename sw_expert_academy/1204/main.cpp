#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int T;
		cin >> T;

		int a[101] = { 0 };

		int score;
		for (int j = 0; j < 1000; j++)
		{
			cin >> score;
			a[score]++;
		}

		int f = 0;
		int answer = -1;

		for (int j = 0; j < 101; j++)
		{
			if (f <= a[j])
			{
				f = a[j];
				answer = j;
			}
		}

		cout << '#' << T << ' ' << answer << '\n';
	}

	return 0;
}
