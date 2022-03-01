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

        void decrease_key(int i, int k);
        void min_heapify(int i);

    public:
        PriorityQueue(int c);
        ~PriorityQueue();

        void push(int k);
        int pop();

        int minimum();
};

PriorityQueue::PriorityQueue(int c)
{
    this->h = new int[c + 1]();
    this->capacity = c;
    this->heap_size = 0;
}

PriorityQueue::~PriorityQueue()
{
    delete[] h;
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

void PriorityQueue::decrease_key(int i, int k)
{
    if ((i > 1) && (h[PARENT(i)] > k))
    {
        swap(PARENT(i), i);
        decrease_key(PARENT(i), k);
    }
}

void PriorityQueue::min_heapify(int i)
{
    int l = LEFT(i);
    int r = RIGHT(i);

    int smallest;

    if ((l <= heap_size) && (h[i] > h[l]))
        smallest = l;
    else
        smallest = i;

    if ((r <= heap_size) && (h[smallest] > h[r]))
        smallest = r;

    if (smallest != i)
    {
        swap(i, smallest);
        min_heapify(smallest);
    }
}

// O(lg n)
void PriorityQueue::push(int k)
{
    if (heap_size == capacity)
        return;

    this->heap_size++;
    this->h[heap_size] = k;

    decrease_key(heap_size, k);
}

// O(lg n)
int PriorityQueue::pop()
{
    if (heap_size == 0)
        return 0;

    int min = minimum();

    swap(1, heap_size);
    heap_size--;

    min_heapify(1);

    return min;
}

// O(1)
int PriorityQueue::minimum()
{
    return h[1];
}

/* Priority Queue using min-heap */
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
