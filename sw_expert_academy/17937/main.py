def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

T = int(input())
for i in range(1, T + 1):
    a, b = map(int, input().split())

    answer = a
    for j in range(a + 1, b + 1):
        answer = gcd(j, answer)
        if answer == 1:
            break

    print('#' + str(i) + ' ' + str(answer))
