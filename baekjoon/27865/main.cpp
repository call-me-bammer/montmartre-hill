#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int n;
    cin >> n;

    int guess;
    char c;
    for (int i = 0; i < 20000; i++) {
        guess = rand() % n + 1;
        cout << "? " << guess << '\n' << flush;

        cin >> c;

        if (c == 'Y') {
            cout << "! " << guess << '\n';
            return 0;
        }
    }

    return 0;
}
