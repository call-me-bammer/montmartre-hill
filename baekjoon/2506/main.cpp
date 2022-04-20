#include <iostream>
using namespace std;

int main()
{
	int n, e;
	cin >> n;
	
	int strict = 0;
	int sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		cin >> e;
		
		if (e == 1)
		{
			sum += strict + 1;
			strict++;
		}
		
		else
		{
			strict = 0;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}
