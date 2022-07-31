#include <iostream>
using namespace std;

char gan[10] = {'6', '7', '8', '9', '0', '1', '2', '3', '4', '5'};
char ji[12] = {'I', 'J', 'K', 'L', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

int main() {

    int n;
    cin >> n;

    cout << ji[n % 12] << gan[n % 10] << endl;
    return 0;
}
