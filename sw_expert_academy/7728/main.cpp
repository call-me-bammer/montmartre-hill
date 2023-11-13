#include <iostream>
#include <stdio.h>
#include <string>
#include <set>

using namespace std;

int main()
{
	int T;
	cin >> T;

	int x;

	for (int i = 1; i <= T; i++)
	{
		set<char> s;

		cin >> x;

		for (int j = 0; j < to_string(x).length(); j++)
		{
			s.insert(to_string(x)[j]);
		}

		printf("#%d %d\n", i, s.size());
	}

	return 0;
}
