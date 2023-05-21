from collections import deque

n = int(input())

a = [0] * (n + 1)
q = deque([1])
qCnt = 1

cnt = 0
while q:
    r = q[0]
    q.popleft()
    qCnt -= 1
    
    if r == n:
        break
    
    if r + 1 <= n and a[r + 1] == 0:
        q.append(r + 1)
        a[r + 1] = 1
    if r * 2 <= n and a[r * 2] == 0:
        q.append(r * 2)
        a[r * 2] = 1
    if r * 3 <= n and a[r * 3] == 0:
        q.append(r * 3)
        a[r * 3] = 1
        
    if qCnt == 0:
        qCnt = len(q)
        cnt += 1
        
print(cnt)
