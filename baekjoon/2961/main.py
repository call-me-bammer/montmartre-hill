import itertools
import sys

n = int(input())

arr = []

for i in range(n):
    arr.append(list(map(int, input().split())))

d = sys.maxsize

for i in range(1, n + 1):
    nCr = itertools.combinations(arr, i)
    for j in nCr:
        s = 1
        b = 0
        for z in range(i):
            s *= j[z][0]
            b += j[z][1]
        if d > abs(s - b):
            d = abs(s - b)

print(d)
