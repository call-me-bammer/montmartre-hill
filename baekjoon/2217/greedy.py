n = int(input())
a = []
for i in range(n):
    a.append(int(input()))
a.sort(reverse=True)

max_weight = 0
w = 0
for k, i in enumerate(a, start=1):
    #if max_weight < i * k:
    #    max_weight = i * k
    max_weight = max(max_weight, i * k)

print(max_weight)
