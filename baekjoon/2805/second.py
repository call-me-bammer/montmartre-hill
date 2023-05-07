import sys

n, m = list(map(int, input().split()))
a = list(map(int, sys.stdin.readline().rstrip().split()))

start = 0
end = max(a) - 1

result = 0

while start <= end:
    mid = (start + end) // 2
    s = 0
    for i in a:
        # time-out case:
        # s += max(0, i - mid)
        if i > mid:
            s += i - mid
        if s >= m:
            break
    if m > s:
        end = mid - 1
    elif m <= s:
        start = mid + 1
        result = mid
    
print(result)
