#include <iostream>
using namespace std;

int main() {
    int N, m, M, T, R;
    cin >> N >> m >> M >> T >> R;

    int answer = 0;

    int i = 0;
    int hp = m;
    while (i != N) {
        if (hp + T <= M) {
            hp += T;
            i++;
        } else if (hp - R >= m) {
            hp -= R;
        } else if (hp - R < m && hp != m) {
            hp = m;
        } else {
            answer = -1;
            break;
        }
        answer++;
    } 

    cout << answer << '\n';
    return 0;
}
