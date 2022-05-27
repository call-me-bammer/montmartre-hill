#include <iostream>
#include <cmath>

/* Dual Priority Queue with Building Max/Min Heap */

class DualPQ {
	private:
		int* h;
		int capacity;
		int heap_size;
		int status;
	
		int PARENT(int i);
		int LEFT(int i);
		int RIGHT(int i);
	
		void swap(int i, int j);
	
		void increase_key(int i, int k);
		void decrease_key(int i, int k);

		void build_max_heap();
		void build_min_heap();
	
		void max_heapify(int i);
		void min_heapify(int i);
	
	public:
		DualPQ(int c);
		~DualPQ();
	
		void push(int k);
		void pop(int isMaxHeap);
	
		bool isEmpty();
	
		int max();
		int min();
};

DualPQ::DualPQ(int c)
{
	this->h = new int[c + 1]();
	this->capacity = c;
	this->heap_size = 0;
	this->status = 1;
}

DualPQ::~DualPQ() { delete h; }

int DualPQ::PARENT(int i) { return floor(i / 2); }
int DualPQ::LEFT(int i) { return 2 * i; }
int DualPQ::RIGHT(int i) { return 2 * i + 1; }

void DualPQ::swap(int i, int j)
{
	int tmp = h[i];
	this->h[i] = h[j];
	this->h[j] = tmp;
}

void DualPQ::increase_key(int i, int k)
{
	if ((i > 1) && (h[PARENT(i)] < k))
	{
		swap(PARENT(i), i);
		increase_key(PARENT(i), k);
	}
}

void DualPQ::decrease_key(int i, int k)
{
	if ((i > 1) && (h[PARENT(i)] > k))
	{
		swap(PARENT(i), i);
		decrease_key(PARENT(i), k);
	}
}

void DualPQ::build_max_heap()
{
	if (status == 1)
		return;
	
	this->status = 1;
	
	for (int i = floor(heap_size / 2); i >= 1; i--)
	{
		max_heapify(i);
	}
}

void DualPQ::build_min_heap()
{
	if (status == -1)
		return;
	
	this->status = -1;
	
	for (int i = floor(heap_size / 2); i >= 1; i--)
	{
		min_heapify(i);
	}
}

void DualPQ::max_heapify(int i)
{
	int l = LEFT(i);
	int r = RIGHT(i);
	
	int largest;
	
	if ((l <= heap_size) && (h[l] > h[i]))
		largest = l;
	else
		largest = i;
	
	if ((r <= heap_size) && (h[r] > h[largest]))
		largest = r;
	
	if (largest != i)
	{
		swap(i, largest);
		max_heapify(largest);
	}
}

void DualPQ::min_heapify(int i)
{
	int l = LEFT(i);
	int r = RIGHT(i);
	
	int smallest;
	
	if ((l <= heap_size) && (h[l] < h[i]))
		smallest = l;
	else
		smallest = i;
	
	if ((r <= heap_size) && (h[r] < h[smallest]))
		smallest = r;
	
	if (smallest != i)
	{
		swap(i, smallest);
		min_heapify(smallest);
	}
}

void DualPQ::push(int k)
{
	if (heap_size == capacity)
		return;
	
	this->heap_size++;
	this->h[heap_size] = k;

	status == 1 ? increase_key(heap_size, k) : decrease_key(heap_size, k);
}

void DualPQ::pop(int isMaxHeap)
{
	if (heap_size == 0)
		return;
	
	isMaxHeap == 1 ? build_max_heap() : build_min_heap();
	
	swap(1, heap_size);
	this->heap_size--;
	
	isMaxHeap == 1 ? max_heapify(1) : min_heapify(1);
}

bool DualPQ::isEmpty()
{
	if (heap_size == 0)
		return true;
	
	return false;
}

int DualPQ::max()
{
	if (status != 1)
		build_max_heap();
	
	return h[1];
}

int DualPQ::min()
{
	if (status != -1)
		build_min_heap();
	
	return h[1];
}

int main()
{
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	
	char c;
	int t, k, n;
	std::cin >> t;
	
	for (int i = 0; i < t; i++)
	{		
		std::cin >> k;
		
		DualPQ dpq(k);
		
		for (int j = 0; j < k; j++)
		{
			std::cin >> c >> n;
			
			if (c == 'I')
			{
				dpq.push(n);
			}
			
			else
			{
				dpq.pop(n);
			}
		}
		
		if (dpq.isEmpty())
		{
			std::cout << "EMPTY\n";
		}
		
		else
		{
			std::cout << dpq.max() << ' ' << dpq.min() << '\n';
		}
	}
	
	return 0;
}
