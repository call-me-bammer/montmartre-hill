a, b = list(map(int, input().split()))
c = abs(a - b) - 1
if c <= 0:
    print(0)
    exit(0)
else: print(c)
if a > b:
    c = a
    a = b
    b = c
for i in range(a + 1, b):
    print(i, end = ' ')
print()