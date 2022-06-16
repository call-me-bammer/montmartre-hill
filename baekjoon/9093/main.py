t = int(input())

for i in range(t):
    a = list(map(str, input().split()))
    [print(b[::-1], end=' ') for b in a]
    print()
