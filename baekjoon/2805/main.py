import sys

n, m = list(map(int, input().split()))
a = list(map(int, sys.stdin.readline().rstrip().split()))

l = 0
r = max(a) - 1

h = 0

while l <= r:
    
    mid = (l + r) // 2
    
    p = 0
    
    for i in a:
        if i > mid:
            p += i - mid
            
        # time-out
        if p >= m:
            break
    
    if (p < m):
        r = mid - 1
        
    else:
        l = mid + 1
        h = mid
        
print(h)
