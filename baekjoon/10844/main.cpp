#include <iostream>
using namespace std;

#define ull unsigned long long

int main()
{
    int n;
    cin >> n;

    ull a[10] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    for (int i = 1; i < n; i++) {
        int front = 0;
        for (int j = 0; j < 9; j++) {
            int next_front = a[j];
            a[j] = (front + a[j+1]) % 1000000000;
            front = next_front;
        }
        a[9] = front;
    }

    ull answer = 0;
    for (int i = 0; i < 10; i++)
        answer = (answer + a[i]) % 1000000000;
    cout << answer << '\n';
}
