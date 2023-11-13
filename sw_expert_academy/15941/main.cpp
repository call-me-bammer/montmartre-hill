#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int TC;
	cin >> TC;

	int N;

	for (int i = 1; i <= TC; i++)
	{
		cin >> N;
		printf("#%d %d\n", i, N * N);
	}

	return 0;
}
