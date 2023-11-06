T = int(input())
for i in range(1, T + 1):
    p, q, r, s, w = map(int, input().split())
    print('#' + str(i) + ' ' + str(min(p * w, q + (0 if r >= w else w - r) * s)))
    