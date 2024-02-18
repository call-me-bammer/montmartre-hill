#include <iostream>

using namespace std;

int paper[128][128] = { 0 };

int white = 0;
int blue = 0;

void scissors(int a, int b, int n) {
    int local_white = 0;
    int local_blue = 0;
    for (int i = a; i < a + n; i++) {
        for (int j = b; j < b + n; j++) {
            if (paper[i][j] == 0) local_white++;
            else local_blue++;
        }
    }

    if (local_white == 0) {
        blue++;
        return;
    }
    
    if (local_blue == 0) {
        white++;
        return;
    }

    scissors(a, b, n / 2);
    scissors(a + n / 2, b, n / 2);
    scissors(a, b + n / 2, n / 2);
    scissors(a + n / 2, b + n / 2, n / 2);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> paper[i][j];
        }
    }

    int a = 0;
    int b = 0;
    scissors(a, b, n);

    cout << white << '\n' << blue << '\n';
    return 0;
}
