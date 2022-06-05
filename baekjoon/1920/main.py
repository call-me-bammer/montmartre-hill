import sys

def binary_search(array, target, start, end):
    
    while start <= end:
        mid = (start + end) // 2
        
        if array[mid] == target:
            return True
        elif array[mid] < target:
            start = mid + 1
        else:
            end = mid - 1
            
    return False

n = int(input())

a = list(map(int, sys.stdin.readline().rstrip().split()))

a.sort()

m = int(input())

b = list(map(int, sys.stdin.readline().rstrip().split()))

for i in range(m):
    if (binary_search(a, b[i], 0, n - 1)):
        print(1)
    else:
        print(0)
