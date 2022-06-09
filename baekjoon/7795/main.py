t = int(input())

for i in range(t):
    
    n, m = list(map(int, input().split()))
    
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    a.sort()
    b.sort()
    
    bMax = max(b)
    result = 0
    
    for j in range(n):
        
        if a[j] > bMax:
            result += m
            continue
    
        l = 0
        r = m - 1
        
        ans = -1
        
        while l <= r:
            
            mid = (l + r) // 2
            
            if a[j] <= b[mid]:
                r = mid - 1
            
            else:
                l = mid + 1
                ans = mid
                
        if ans != -1:
            result += ans + 1
        
    print(result)    
