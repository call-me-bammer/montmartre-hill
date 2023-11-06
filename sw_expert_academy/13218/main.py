import math

T = int(input())
for i in range (1, T + 1):
    n = int(input())
    print('#' + str(i) + ' ' + str(math.floor(n / 3)))
