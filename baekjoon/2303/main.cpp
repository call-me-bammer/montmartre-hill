#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, card;
    cin >> n;

    vector<int>* v = new vector<int>[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> card;
            v[i].push_back(card);
        }
    }

    int max = 0;
    int whoHasMax = 0;

    // do 5C3
    for (int i = 0; i < n; i++)
    {
        // 1, 1, 1, 0, 0
        vector<int> iv{1, 1, 1, 0, 0};

        // TODO : sort to guarantee '0, 0, 1, 1, 1'
        sort(iv.begin(), iv.end());

        do
        {
            int sum = 0;

            for (int j = 0; j < 5; j++)
            {
                if (iv[j] == 1)
                    sum += v[i][j];

            }

            sum = (to_string(sum).length() == 2 ? to_string(sum)[1] - '0' : sum);

            if (max <= sum)
            {
                max = sum;
                whoHasMax = i + 1;
            }

        } while (next_permutation(iv.begin(), iv.end()));
    }

    cout << whoHasMax << endl;

    return 0;
}
