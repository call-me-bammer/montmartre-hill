#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	
	int cnt = 0;
	
	for (int i = 0; i < 32; i++)
	{
		if (1 & x)
		{
			cnt++;
		}
		
		x = x >> 1;
	}
	
	cout << cnt << endl;
	return 0;
}
