#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int** a = new int*[10];
	for (int i = 0; i < 10; i++)
		a[i] = new int[10]();
	
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cin >> a[i][j];
		}
	}
	
	int max = 0;
	int idx = 0, jdx = 0;
	
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
				idx = i;
				jdx = j;
			}
		}
	}
		
	cout << max << endl
		 << idx << ' ' << jdx << endl;
	
	delete a;
	
	return 0;
}
