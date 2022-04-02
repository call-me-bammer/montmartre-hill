#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string e;
    int b;

    cin >> e >> b;

    int sum = 0;

    for (int i = 0; i < e.size(); i++)
    {
        // '0' ~ '9' => 48 ~ 57
        int k = e[i] - '0'; // 48

        // 'A' ~ 'Z' = > 65 ~ 90
        if (e[i] >= 'A')
            k = e[i] - 'A' + 10;

        // sum = sum + b^(e.size()-i-1) * k
        sum += pow(b, e.size() - i - 1) * k;
    }

    cout << sum << endl;
    
    return 0;
}
