#include <iostream>
#include <cmath>
using namespace std;

class PriorityQueue
{
    int* a;
    int capacity;
    int heap_size;

    public:
        PriorityQueue(int capacity);

        ~PriorityQueue();

        int size();
        
        int PARENT(int i);
        int LEFT(int i);
        int RIGHT(int i);

        void swap(int i, int j);

        int extract_max();

        void insert_key(int k);

        void increase_key(int i);

        void max_heapify(int i);
};

PriorityQueue::PriorityQueue(int c)
{
    heap_size = 0;
    capacity = c;
    a = new int[c + 1];
}

PriorityQueue::~PriorityQueue() { delete[] a; }

int PriorityQueue::size() { return heap_size; }

int PriorityQueue::PARENT(int i) { return floor(i / 2); }
int PriorityQueue::LEFT(int i) { return 2 * i; }
int PriorityQueue::RIGHT(int i) { return 2 * i + 1; }

void PriorityQueue::swap(int i, int j)
{
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

int PriorityQueue::extract_max()
{
    int max = a[1];

    swap(1, heap_size);

    heap_size--;

    max_heapify(1);

    return max;
}

void PriorityQueue::insert_key(int k)
{
    if (heap_size == capacity)
        return;

    heap_size++;

    a[heap_size] = k;

    increase_key(heap_size);
}

void PriorityQueue::increase_key(int i)
{
    int x = i;

    while ((x > 1) && (a[x] > a[PARENT(x)]))
    {
        swap(x, PARENT(x));
        x = PARENT(x);
    }
}

void PriorityQueue::max_heapify(int i)
{
    int l = LEFT(i);
    int r = RIGHT(i);

    int largest;

    if ((l <= heap_size) && (a[l] > a[i]))
        largest = l;

    else
        largest = i;

    if ((r <= heap_size) && (a[r] > a[largest]))
        largest = r;

    if (largest != i)
    {
        swap(largest, i);
        max_heapify(largest);
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    // ex. n = 13
    int n;
    cin >> n;

    PriorityQueue pq(n);

    int x;

    // ex. 0 1 2 0 0 3 2 1 0 0 0 0 0
    for (int i = 1; i <= n; i++)
    {
        cin >> x;

        if (x != 0)
            pq.insert_key(x);

        else if (pq.size() == 0)
            cout << 0 << '\n';

        else
            cout << pq.extract_max() << '\n';
    }

    // out. 0 2 1 3 2 1 0 0
    return 0;
}
