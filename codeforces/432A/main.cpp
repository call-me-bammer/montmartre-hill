#include <iostream>
using namespace std;
 
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, k, y;
	cin >> n >> k;
	
	int p = 0;
	
	for (int i = 0; i < n; i++)
	{
		cin >> y;
		
		if (y > 5 - k)
			continue;
	
		p++;
	}
	
	cout << p / 3 << '\n';
	return 0;	
}
