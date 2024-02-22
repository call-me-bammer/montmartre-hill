#include <iostream>
#include <vector>

#define N_MAX 50000

using namespace std;

int main() {
    int n;
    cin >> n;

    int table[N_MAX + 1];
    for (int i = 1; i <= N_MAX; i++)
        table[i] = 4;
    
    vector<int> squares;
    int a = 1;
    while (a * a <= N_MAX) {
        squares.push_back(a * a);
        table[a * a] = 1;
        table[a * a + 1] = 2;
        a++;
    }

    for (auto i: squares) {
        for (auto j: squares) {
            if (i + j > N_MAX || table[i + j] == 1)
                continue;
            table[i + j] = 2;
            for (auto z: squares) {
                if (i + j + z > N_MAX || table[i + j + z] < 3)
                    continue;
                table[i + j + z] = 3;
            }
        }
    }

    cout << table[n] << '\n';
    return 0;
}
