import sys
from functools import cmp_to_key

def cmp(a, b):
    if a[1] > b[1]:
        return 1
    elif a[1] < b[1]:
        return -1
    elif a[0] < b[0]:
        return 1
    return -1

n = int(input())
a = []
for i in range(n):
    a.append(tuple(list(map(int, sys.stdin.readline().rstrip().split()))))
a.sort(key=cmp_to_key(cmp))

d = []
for j in range(n):
    m = 1
    for i in range(len(d)):
        if a[i][1] <= a[j][0] and m < d[i] + 1:
            m = d[i] + 1
    d.append(m)
    
print(max(d))
