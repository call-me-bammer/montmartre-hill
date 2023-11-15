#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>

using namespace std;

#define TEST_CASE 10

int main()
{
	int n;

	for (int i = 1; i <= TEST_CASE; i++)
	{
		cin >> n;
		if (n == 4)
		{
			printf("#%d %d\n", i, 0);
			continue;
		}

		int answer = 0;
		int ll = 0;
		int l = 0;
		vector<int> v;
		int r, rr;

		int a;

		for (int j = 0; j < n; j++)
		{
			cin >> a;
			v.push_back(a);
		}

		a = v[2];
		r = v[3];
		rr = v[4];

		for (int j = 2; j < n - 2; j++)
		{
			vector<int> t = { a - ll, a - l, a - r, a - rr };
			int m = *min_element(t.begin(), t.end());
			
			answer += (m < 0 ? 0 : m);

			if (j + 3 >= n)
				break;

			ll = l;
			l = a;
			a = r;
			r = rr;
			rr = v[j + 3];
		}

		printf("#%d %d\n", i, answer);
	}

	return 0;
}
