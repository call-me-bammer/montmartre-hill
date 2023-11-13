#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int T;
	cin >> T;

	int a, b;

	for (int i = 1; i <= T; i++)
	{
		cin >> a >> b;
		printf("#%d %c\n", i, (a > b ? '>' : (a < b ? '<' : '=')));
	}

	return 0;
}
