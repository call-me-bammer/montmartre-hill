#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    priority_queue<int> max_heap;

    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        // build max heap
        max_heap.push(a);
    }

    bool disappointed = false;
    for (int i = 0; i < m; i++)
    {
        cin >> a;

        if (max_heap.size() == 0)
        {
            disappointed = true;
            break;
        }

        int remain = max_heap.top() - a;

        max_heap.pop();

        if (remain > 0)
            max_heap.push(remain);

        else if (remain < 0)
        {
            disappointed = true;
            break;
        }
    }

    cout << (disappointed == true ? 0 : 1) << '\n';
    return 0;
}
