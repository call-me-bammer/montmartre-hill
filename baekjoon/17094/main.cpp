#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;

	cin >> n >>  s;

	int t = 0, e = 0;

	for (int i = 0; i < n; i++)
	{
		if (s[i] == '2')
			t++;
		else e++;
	}

	if (t > e)
		cout << "2" << endl;
	else if (t < e) cout << "e" << endl;

	else cout << "yee" << endl;

	return 0;
}

