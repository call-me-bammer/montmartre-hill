#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string initial;
    int lastTwoStudentNumber;

    deque<pair<string, int>> dq;

    for (int i = 0; i < n; i++)
    {
        cin >> initial >> lastTwoStudentNumber;
        dq.push_back({initial, lastTwoStudentNumber});
    }

    while (dq.size() > 1)
    {
        pair<string, int> student = dq.front();
        dq.pop_front();

        for (int i = 0; i < student.second - 1; i++)
        {
            pair<string, int> temp = dq.front();
            dq.pop_front();
            dq.push_back(temp);
        }

        dq.pop_front();
    }

    cout << dq.front().first << '\n';
    return 0;
}
