#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool isWin = false;

    string line;
    for (int i = 0; i < 7; i++)
    {
        cin >> line;

        if (isWin)
        {
            continue;
        }

        string answer;
        for (int j = 0; j < 5; j++)
        {
            // find each character in line weather it is in s or not
            // if it is in s, add Y to answer
            // if it also has same position in s, add G to answer
            // if it is not in s, add X to answer

            size_t pos = s.find(line[j]);

            if (pos != string::npos)
            {
                if (s[j] == line[j])
                {
                    answer += 'G';
                }
                else
                {
                    answer += 'Y';
                }
            }
            else
            {
                answer += 'X';
            }
        }

        if (answer == "GGGGG")
        {
            cout << "WINNER\n";
            isWin = true;
        }
        else if (i == 6)
        {
            cout << "LOSER\n";
        }
        else
        {
            cout << answer << '\n';
        }
    }

    return 0;
}
