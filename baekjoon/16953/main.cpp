#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <set>

#define RANGE 1000000000
#define ll long long

using namespace std;

int a, b;
//bool check[RANGE + 1] = { false };
set<ll> check;
bool isReached = false;
int phase = 1;

void bfs(queue<ll> q) {
    int qCnt = 1;

    while (qCnt) {

        ll r = q.front();
        q.pop();
        //check[r] = true;
        qCnt--;

        ll candidates[2] = {2 * r, stoll(to_string(r) + "1")};

        for (ll c : candidates) {
            if ((c <= RANGE) && (check.find(c) == check.end())) {
                q.push(c);
                check.insert(c);
                //check[c] = true;
            }
        }

        if (check.find(b) != check.end()) {
            isReached = true;
            break;
        }

        if (!qCnt) {
            qCnt = q.size();
            phase += 1;
        }
    }
}

int main() {
    cin >> a >> b;

    queue<ll> q;
    q.push(a);

    bfs(q);

    cout << (isReached ? phase + 1 : -1) << '\n';
    return 0;
}
