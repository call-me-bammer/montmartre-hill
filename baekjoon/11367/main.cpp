#include <iostream>
#include <string>
using namespace std;

int cut_line[] = {97, 90, 87, 80, 77, 70, 67, 60, 0};

const char* grades[] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

string stog(int score);

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int t;
	cin >> t;
	cin >> ws;

	string str;

	for (int i = 0; i < t; i++)
	{
		getline(cin, str);
		//cout << str << '\n';

		int space = str.find(' ');

		//cout << stoi(str.substr(str.find(' '), str.size())) << '\n';
		string grade = stog(stoi(str.substr(space, str.size())));
		//cout << grade << '\n';
		str.replace(space + 1, str.size() - space, grade);
		cout << str << '\n';
	}	

	return 0;
}

string stog(int score)
{
	int i = 0;

	for (; i < sizeof(cut_line) / sizeof(cut_line[0]); i++)
	{
		if (cut_line[i] <= score)
			break;
	}
	
	return grades[i];
}

