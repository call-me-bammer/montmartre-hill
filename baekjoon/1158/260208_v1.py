from collections import deque

n, k = map(int, input().split())
l = deque(i+1 for i in range(n))
a = []
# rotate k-1 item till list size to be 0
while len(l) > 0:
  l.rotate(-(k-1))
  a.append(l[0])
  l.popleft()
# print a with '<' + '>' separator
print('<' + ', '.join(map(str, a)) + '>')