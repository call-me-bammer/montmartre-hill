import sys

k, n = list(map(int, input().split()))
a = [int(line.strip()) for line in sys.stdin.readlines()]

start = 1
end = max(a)

result = 0

while start <= end:
    mid = (start + end) // 2
    s = 0
    for i in a:
        s += i // mid
    if n > s:
        end = mid - 1
    elif n <= s:
        start = mid + 1
        result = mid
    
print(result)
