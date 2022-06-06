n = int(input())
a = list(map(int, input().split()))

m = int(input())

l = 0
r = max(a)

h = 0;

while l <= r:
    
    mid = (l + r) // 2
    
    p = 0
    
    for i in a:
        if (i > mid):
            p += mid
        else:
            p += i
    
    if (p > m):
        r = mid - 1
        
    else:
        l = mid + 1
        h = mid
    
print(h)
