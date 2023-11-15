#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;

	int n;

	for (int i = 1; i <= T; i++)
	{
		cin >> n;
		vector<int> v;

		int a;

		for (int j = 0; j < n; j++)
		{
			cin >> a;
			v.push_back(a);
		}

		reverse(v.begin(), v.end());

		int m = v[0];
		long long answer = 0;

		for (int j = 1; j < n; j++)
		{
			if (v[j] < m)
			{
				answer += m - v[j];
			}

			else
			{
				m = v[j];
			}
		}

		printf("#%d %lld\n", i, answer);
	}

	return 0;
}
