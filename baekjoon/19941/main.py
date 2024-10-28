n, k = map(int, input().split())
s = input()

a = []
for i, c in enumerate(s):
    if c == 'P':
        a.append(i)

max = 0
for p in a:
    for i in range(p - k, p + k + 1):
        if 0 <= i < n and s[i] == 'H':
            s = s[:i] + 'X' + s[i+1:]
            max += 1
            break

print(max)
