#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int space = n - 1;
	
	for (int i = 0; i < n; i++)
	{
		for (int z = 0; z < space; z++)
		{
			cout << " ";
		}
		
		if (space != 0)
			space--;

		for (int k = 0; k < i * 2 + 1; k++)
		{
			if (k % 2 == 0)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
