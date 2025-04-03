import math as m
r, c, n = list(map(int, input().split()))
print(m.ceil(r / n) * m.ceil(c / n))