import copy

n = int(input())

a = list(map(int, input().split()))
b = copy.deepcopy(a)

b.sort()

q = []

for i in range(max(a) + 1):
    q.append([])

for i in range(n):
    q[b[i]].append(i)
    
for i in range(n):
    print(q[a[i]].pop(0), end=' ')
print()
