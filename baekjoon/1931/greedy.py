import sys
from functools import cmp_to_key

def cmp(a, b):
    if a[1] > b[1]:
        return 1
    elif a[1] < b[1]:
        return -1
    elif a[0] > b[0]:
        return 1
    return -1

n = int(input())
a = []
for i in range(n):
    a.append(tuple(map(int, sys.stdin.readline().rstrip().split())))
a.sort(key=cmp_to_key(cmp))

answer = 0
t = 0
for i in a:
    if t <= i[0]:
        answer += 1
        t = i[1]

print(answer)
