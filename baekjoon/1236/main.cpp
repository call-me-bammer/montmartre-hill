#include <iostream>
using namespace std;

char g[50][50];

int main() {

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }    

    int row = 0;
    int col = 0;

    int isEmpty;

    // find empty row
    for (int i = 0; i < n; i++) {
        isEmpty = 1;

        for (int j = 0; j < m; j++) {
            if (g[i][j] != '.') {
                isEmpty = 0;
                break;
            }
        }

        if (isEmpty)
            row++;
    }

    // find empty col
    for (int i = 0; i < m; i++) {
        isEmpty = 1;

        for (int j = 0; j < n; j++) {
            if (g[j][i] != '.') {
                isEmpty = 0;
                break;
            }
        }

        if (isEmpty)
            col++;
    }

    cout << max(row, col) << '\n';
    
    return 0;
}
