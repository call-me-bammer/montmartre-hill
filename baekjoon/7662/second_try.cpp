#include <iostream>
#include <cmath>

/* Dual Priority Queue with Max & Min PQ */

class DualPQ {
	private:
		int* a;
		int* b;
		int capacity;
		int heap_a_size;
		int heap_b_size;
		int heap_size;
	
		int PARENT(int i);
		int LEFT(int i);
		int RIGHT(int i);
	
		void swap_max(int i, int j);
		void swap_min(int i, int j);
	
		void increase_key(int i, int k);
		void decrease_key(int i, int k);
	
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
	
		void print_a();
		void print_b();
};

DualPQ::DualPQ(int c)
{
	this->a = new int[c + 1]();
	this->b = new int[c + 1]();
	
	this->capacity = c;
	this->heap_a_size = 0;
	this->heap_b_size = 0;
	this->heap_size = 0;
}

DualPQ::~DualPQ()
{
	delete a;
	delete b;
}

int DualPQ::PARENT(int i) { return floor(i / 2); }
int DualPQ::LEFT(int i) { return 2 * i; }
int DualPQ::RIGHT(int i) { return 2 * i + 1; }

void DualPQ::swap_max(int i, int j)
{
	int tmp = a[i];
	this->a[i] = a[j];
	this->a[j] = tmp;
}

void DualPQ::swap_min(int i, int j)
{
	int tmp = b[i];
	this->b[i] = b[j];
	this->b[j] = tmp;
}

void DualPQ::increase_key(int i, int k)
{
	if ((i > 1) && (a[PARENT(i)] < k))
	{
		swap_max(PARENT(i), i);
		increase_key(PARENT(i), k);
	}
}

void DualPQ::decrease_key(int i, int k)
{
	if ((i > 1) && (b[PARENT(i)] > k))
	{
		swap_min(PARENT(i), i);
		decrease_key(PARENT(i), k);
	}
}

void DualPQ::max_heapify(int i)
{
	int l = LEFT(i);
	int r = RIGHT(i);
	
	int largest;
	
	if ((l <= heap_a_size) && (a[l] > a[i]))
		largest = l;
	else
		largest = i;
	
	if ((r <= heap_a_size) && (a[r] > a[largest]))
		largest = r;
	
	if (largest != i)
	{
		swap_max(i, largest);
		max_heapify(largest);
	}
}

void DualPQ::min_heapify(int i)
{
	int l = LEFT(i);
	int r = RIGHT(i);
	
	int smallest;
	
	if ((l <= heap_b_size) && (b[l] < b[i]))
		smallest = l;
	else
		smallest = i;
	
	if ((r <= heap_b_size) && (b[r] < b[smallest]))
		smallest = r;
	
	if (smallest != i)
	{
		swap_min(i, smallest);
		min_heapify(smallest);
	}
}

void DualPQ::push(int k)
{
	if (heap_size == capacity)
		return;
	
	this->heap_size++;
	this->heap_a_size++;
	this->heap_b_size++;
	
	this->a[heap_a_size] = k;
	this->b[heap_b_size] = k;

	increase_key(heap_a_size, k);
	decrease_key(heap_b_size, k);
}

void DualPQ::pop(int isMaxHeap)
{
	if (heap_size == 0)
		return;
	
	if (isMaxHeap == 1)
	{
		swap_max(1, heap_a_size);
		this->heap_a_size--;
	}
	
	else
	{
		swap_min(1, heap_b_size);
		this->heap_b_size--;
	}
	
	this->heap_size--;
	
	isMaxHeap == 1 ? max_heapify(1) : min_heapify(1);
}

bool DualPQ::isEmpty()
{
	if (heap_size == 0)
		return true;
	
	return false;
}

int DualPQ::max() { return a[1]; }
int DualPQ::min() { return b[1]; }

void DualPQ::print_a()
{
	std::cout << "Max : ";
	for (int i = 1; i <= heap_a_size; i++)
		std::cout << a[i] << ' ';
	std::cout << '\n';
}

void DualPQ::print_b()
{
	std::cout << "Min : ";
	for (int i = 1; i <= heap_b_size; i++)
		std::cout << b[i] << ' ';
	std::cout << '\n';
}

int main()
{
	//std::cin.tie(0);
	//std::ios::sync_with_stdio(false);
	
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
				dpq.print_a();
				dpq.print_b();
			}
			
			else
			{
				dpq.pop(n);
				dpq.print_a();
				dpq.print_b();
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
