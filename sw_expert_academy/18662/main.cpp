#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;

	int a, b, c;

	for (int i = 1; i <= T; i++)
	{
		cin >> a >> b >> c;
		printf("#%d %.1f\n", i, abs(b - (a + (c - a) / (double)2)));
	}

	return 0;
}
