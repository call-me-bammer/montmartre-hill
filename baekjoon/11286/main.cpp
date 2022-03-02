#include <iostream>
#include <cmath>

class PriorityQueue
{
    private:

        int* h;
        int capacity;
        int heap_size;

        int PARENT(int i);
        int LEFT(int i);
        int RIGHT(int i);

        void swap(int i, int j);
        bool abs(int p, int c);

        void abs_key(int i, int k);
        void abs_heapify(int i);

    public:

        PriorityQueue(int capacity);
        ~PriorityQueue();

        void push(int k);
        int pop();

        int min_abs();
};

PriorityQueue::PriorityQueue(int capacity)
{
    this->h = new int[capacity + 1];
    this->capacity = capacity;
    this->heap_size = 0;
}

PriorityQueue::~PriorityQueue()
{
    delete[] this->h;
}

int PriorityQueue::PARENT(int i) { return floor(i / 2); }
int PriorityQueue::LEFT(int i) { return 2 * i; }
int PriorityQueue::RIGHT(int i) { return 2 * i + 1; }

void PriorityQueue::swap(int i, int j)
{
    int tmp = h[i];
    this->h[i] = h[j];
    this->h[j] = tmp;
}

bool PriorityQueue::abs(int p, int c)
{
    // must swap
    if (std::abs(p) > std::abs(c))
        return true;

    else if (std::abs(p) < std::abs(c))
        return false;

    // must swap
    else if (p > c)
        return true;

    else
        return false;
}

void PriorityQueue::abs_key(int i, int k)
{
    if ((i > 1) && (abs(h[PARENT(i)], k)))
    {
        swap(PARENT(i), i);
        abs_key(PARENT(i), k);
    }
}

void PriorityQueue::abs_heapify(int i)
{
    int l = LEFT(i);
    int r = RIGHT(i);

    int smallest;

    if ((l <= heap_size) && (abs(h[i], h[l])))
        smallest = l;

    else
        smallest = i;

    if ((r <= heap_size) && (abs(h[smallest], h[r])))
        smallest = r;

    if (smallest != i)
    {
        swap(i, smallest);
        abs_heapify(smallest);
    }
}

void PriorityQueue::push(int k)
{
    if (heap_size == capacity)
        return;

    heap_size++;

    this->h[heap_size] = k;

    abs_key(heap_size, k);
}

int PriorityQueue::pop()
{
    if (heap_size == 0)
        return 0;

    int min = min_abs();

    swap(1, heap_size);

    heap_size--;

    abs_heapify(1);

    return min;
}

int PriorityQueue::min_abs()
{
    return h[1];
}

int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    PriorityQueue pq(n);

    int x;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x;

        if (x != 0)
            pq.push(x);

        else
            std::cout << pq.pop() << '\n';
    }

    return 0;
}
