#include <iostream>
#include <queue>
#include <vector>

template<typename T>
void print_queue(T q)
{
	while (!q.empty())
	{
		std::cout << q.top() << ' ';
		q.pop();
	}
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
		
		std::priority_queue<int, std::vector<int>> q1;
		std::priority_queue<int, std::vector<int>, std::greater<int>> q2;
		
		int size = 0;
		
		for (int j = 0; j < k; j++)
		{
			std::cin >> c >> n;
			
			if (c == 'I')
			{
				size++;
				q1.push(n);
				q2.push(n);
				
				print_queue(q1);
				print_queue(q2);
			}
			
			else if (size != 0)
			{
				if (n == 1)
				{
					q1.pop();
					q2.pop_back();
				}
				
				else
				{
					q2.pop();
					q1.pop_back();
				}
				
				size--;
				
				print_queue(q1);
				print_queue(q2);
			}
		}
		
		if (size == 0)
		{
			std::cout << "EMPTY\n";
		}
		
		else
		{
			std::cout << q1.top() << ' ' << q2.top() << '\n';	
		}
	}
	
	return 0;	
}
